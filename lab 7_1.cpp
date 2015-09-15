#include <iostream>
using  namespace std;

int main(int argc, char *argv[]) {
	int i,j;
	double A[5][4], X[5], S, B;
	cout<<"B=";
	cin>>B;
	cout<< endl;
	
	for (i=0; i<5;i++)
	{	for(j=0;j<4;j++)
		{	cout<<"A["<<i+1<<"]["<<j+1<<"]=";
			cin>>A[i][j];
		}
	}
	cout<< endl;
	for (i=0; i<5;i++)
	{
		S=0;
		for(j=0;j<4;j++)
		{ 
				S=S+A[i][j];
				if (S>B) X[i]=S; else X[i]=0 ;		
		}
	}
	for (i=0; i<5;i++)
	cout<<"X["<<i+1<<"]="<<X[i]<<endl;
	return 0;
}
