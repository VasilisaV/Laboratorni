#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define n 100

FILE*file;

struct shipment {
	char name [25];
	char number [25];
	char sold [25];
} st;

	 

void input (shipment st);
void output (shipment st);
void sold (shipment st);
void menu();

int main(int argc, char *argv[]) {	
	setlocale (LC_ALL, "ukrainian");
	
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
	cout << "-------------------- \n";
	
	while (3){
		cin >> k;
		
		switch (k){
			case 1: input(st); break;
			case 2: output(st); break;
			case 0: exit(3);
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
	
	cout << "----------------------------------------------------\n";
	
	while ((c = fread (&st, sizeof(shipment), 1, file)) != NULL) {
		cout << "����� - " << st.name 
		<< ", �i���i��� - " << st.number 
		<< ", ����i��� - "	<< st.sold << "\n";
	}
	
	fclose(file); 
	
	cout << "----------------------------------------------------\n";
	
	cout << "\n";
	cout << "|����� ��������|\n";
	cout << "\n";
	menu();

}

	
	
	
