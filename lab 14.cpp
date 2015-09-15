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
	cout <<"|Базу очищено|\n";
}

void search(shipment st)
{
	file = fopen ("Text.txt", "a+");
	int r, c,p;
	char w [20];
	
	cout<<"--------------------- \n";
	cout<<"\t\tПошук за: \n";
	cout<<"1 - Iм`ям \n";
	cout<<"2 - Прiзвищем \n";
	cout<<"3 - Номером \n";
	cout << "-------------------- \n";
	
	cin >> r;
	cout << "-------------------- \n";
	
	switch (r)
	{
		case 1 : 	cout<<"Введiть шукане iм`я:  ";
		    		cin >> w;
						
					while ((c= fread(&st, sizeof(shipment),1,file))!=NULL ) 
					{
						if(w==st.name)
						{
							cout<< "Ім`я -  "<< st.name << ", Прiзвище -  "<<st.surname<< ", Номер -  " <<st.number;
						}
					}break;
		case 2 : 	
					cout<<"Введiть шукане прiзвище:  ";
		    		cin >> w;
					while ((c= fread(&st, sizeof(shipment),1,file))!=NULL ) 
					{
						if(w==st.surname)
						{
							cout<< "Ім`я -  "<< st.name << ", Прiзвище -  "<<st.surname<< ", Номер -  " <<st.number;
						}
					}break;
			
		case 3 :
					cout<<"Введiть шуканий телефонний номер:  ";
		    		cin >> w;
					while ((c= fread(&st, sizeof(shipment),1,file))!=NULL) 
					{
						if(w==st.number)
						{
				        	cout<< "Ім`я -  "<< st.name << ", Прiзвище -  "<<st.surname<< ", Номер -  " <<st.number;
						}
					}break;
		default: cout<< "помилка";
	}
	
	fclose(file);
	menu();
}


void menu(){
	
	int k;
	
	cout << "-------------------- \n";
	cout << "Виберiть операцiю: \n";
	cout << "-------------------- \n";
	cout << "0 - вихiд \n";
	cout << "1 - введення даних  \n";
	cout << "2 - виведення даних  \n";
	cout <<	"3 - пошук по файлу \n";
	cout << "4 - очищення файлу \n";
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
	
	cout << "Iмя: ";
	cin >> st.name;
	cout << "Прiзвище: ";
	cin >> st.surname;
	cout << "Номер телефону: ";
	cin >> st.number;

	
	fwrite(&st, sizeof(shipment), 1, file);
	
	fclose(file);
	cout << "\n";
	cout << "|Запит виконано|\n";
	cout << "\n";
	menu();

}

void output(shipment st){
	file = fopen ("Text.txt", "a+");
	
	int c;
	int d;
	
	cout << "----------------------------------------------------\n";
	
	while ((c = fread (&st, sizeof(shipment), 1, file)) != NULL) {
		cout << "Iмя - " << st.name 
		<< ", Прiзвище - " << st.surname 
		<< ", Номер телефону  - " << st.number <<"\n";
	
	}

	cout << "----------------------------------------------------\n";
	
	cout << "\n";
	cout << "|Запит виконано|\n";
	cout << "\n";
	menu();
}	

