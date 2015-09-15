#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

FILE*file;

struct shipment {
	char name [25];
	double number;
	double sold;
} st; 

void input (shipment st);
void output (shipment st);
void sold (shipment st);
void search (shipment st);
void menu();

int main(int argc, char *argv[]) {	
	setlocale (LC_ALL, "ukrainian");
	
	menu();
}

void search (shipment st){
	file = fopen ("Text.txt", "ab+");
	
	int c;
	int p;
	double s_sold;
	
	cout << "����i�� ��������: ";
	cin >> s_sold;
		
	cout << "----------------------------------------------------\n";
	
	while ((c = fread (&st, sizeof(shipment), 1, file)) != NULL) {
		if (s_sold == st.sold){
			cout << "����� - " << st.name 
			<< ", �i���i��� - " << st.number 
			<< ", ����i��� - "	<< st.sold << "\n";	
		
			p++;	
		}	

	}
	
	cout << "�������� ���������i�: "<< p << "\n";
	
	cout << "----------------------------------------------------\n";

	fclose(file); 
	
	cout << "\n";
	cout << "|����� ��������|\n";
	cout << "\n";
	menu();	
}

void menu(){
	
	int k;
	
	cout << "-------------------- \n";
	cout << "�����i�� ������i�: \n";
	cout << "-------------------- \n";
	cout << "0 - ���i� \n";
	cout << "1 - �������� �����  \n";
	cout << "2 - ��������� �����  \n";
	cout << "3 - ����� �� ����i���  \n";
	cout << "-------------------- \n";
	
	while (4){
		cin >> k;
		
		switch (k){
			case 1: input(st); break;
			case 2: output(st); break;
			case 3: search(st); break;
			case 0: exit(4);
		}
	}
}

void input (shipment st){
	file = fopen ("Text.txt", "a+");
	
	cout << "-------------------- \n";
	
	cout << "�����: ";
	cin >> st.name;
	cout << "�i���i���: ";
	cin >> st.number;
	cout << "����i���: ";
	cin >> st.sold;
	
	fwrite(&st, sizeof(shipment), 1, file);
	
	fclose(file);
	cout << "\n";
	cout << "|����� ��������|\n";
	cout << "\n";
	menu();
}



void output(shipment st){
	file = fopen ("Text.txt", "ab+");
	
	int c;
	int d;
	double all_number;
	double all_sold;
	
	
	cout << "----------------------------------------------------\n";
	
	while ((c = fread (&st, sizeof(shipment), 1, file)) != NULL) {
		cout << "����� - " << st.name 
		<< ", �i���i��� - " << st.number 
		<< ", ����i��� - "	<< st.sold << "\n";
		
		all_number = all_number + st.number;
		all_sold = all_sold + st.sold;
	}
	
	cout << "----------------------------------------------------\n";
	cout << "�������� �i���i��� - " << all_number << ", �������� ����i��� - " << all_sold << "\n";
	
	fclose(file); 
	
	cout << "----------------------------------------------------\n";
	
	cout << "\n";
	cout << "|����� ��������|\n";
	cout << "\n";
	menu();
}

	
	
	
