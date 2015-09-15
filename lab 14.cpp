#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fstream>

using namespace std;

FILE*file;

struct shipment {
	char name [20] ;
	char surname[20] ;
	char number[20] ;

} st;

void clean ();
void input (shipment st);
void output (shipment st);
void sold (shipment st);
void search(shipment st);

void menu();

int main(int argc, char *argv[]) {	
	setlocale (LC_ALL, "ukrainian");
	
	menu();
}
void clean ()
{
	fstream clear_file("Text.txt", ios::out);
	clear_file.close();
	cout <<"|���� �������|\n";
}

void search(shipment st)
{
	file = fopen ("Text.txt", "a+");
	int r, c,p;
	char w [20];
	
	cout<<"--------------------- \n";
	cout<<"\t\t����� ��: \n";
	cout<<"1 - I�`�� \n";
	cout<<"2 - ��i������ \n";
	cout<<"3 - ������� \n";
	cout << "-------------------- \n";
	
	cin >> r;
	cout << "-------------------- \n";
	
	switch (r)
	{
		case 1 : 	cout<<"����i�� ������ i�`�:  ";
		    		cin >> w;
						
					while ((c= fread(&st, sizeof(shipment),1,file))!=NULL ) 
					{
						if(w==st.name)
						{
							cout<< "��`� -  "<< st.name << ", ��i����� -  "<<st.surname<< ", ����� -  " <<st.number;
						}
					}break;
		case 2 : 	
					cout<<"����i�� ������ ��i�����:  ";
		    		cin >> w;
					while ((c= fread(&st, sizeof(shipment),1,file))!=NULL ) 
					{
						if(w==st.surname)
						{
							cout<< "��`� -  "<< st.name << ", ��i����� -  "<<st.surname<< ", ����� -  " <<st.number;
						}
					}break;
			
		case 3 :
					cout<<"����i�� ������� ���������� �����:  ";
		    		cin >> w;
					while ((c= fread(&st, sizeof(shipment),1,file))!=NULL) 
					{
						if(w==st.number)
						{
				        	cout<< "��`� -  "<< st.name << ", ��i����� -  "<<st.surname<< ", ����� -  " <<st.number;
						}
					}break;
		default: cout<< "�������";
	}
	
	fclose(file);
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
	cout <<	"3 - ����� �� ����� \n";
	cout << "4 - �������� ����� \n";
	cout << "-------------------- \n";
	
	while (4){
		cin >> k;
		
		switch (k){
			case 1: input(st); break;
			case 2: output(st); break;
			case 3: search(st); break;
			case 4: clean();break;
			case 0: exit(4);
		}
	}
}

void input (shipment st){
	file = fopen ("Text.txt", "a+");
	
	cout << "-------------------- \n";
	
	cout << "I��: ";
	cin >> st.name;
	cout << "��i�����: ";
	cin >> st.surname;
	cout << "����� ��������: ";
	cin >> st.number;

	
	fwrite(&st, sizeof(shipment), 1, file);
	
	fclose(file);
	cout << "\n";
	cout << "|����� ��������|\n";
	cout << "\n";
	menu();

}

void output(shipment st){
	file = fopen ("Text.txt", "a+");
	
	int c;
	int d;
	
	cout << "----------------------------------------------------\n";
	
	while ((c = fread (&st, sizeof(shipment), 1, file)) != NULL) {
		cout << "I�� - " << st.name 
		<< ", ��i����� - " << st.surname 
		<< ", ����� ��������  - " << st.number <<"\n";
	
	}

	cout << "----------------------------------------------------\n";
	
	cout << "\n";
	cout << "|����� ��������|\n";
	cout << "\n";
	menu();
}	

