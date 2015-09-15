#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	double B,X;
	int A;
	
	cout<<"vvedit A=";
	cin>>A;
	cout<<"vvedit B=";
	cin>>B;
	cout<< endl;
	
if ((A==0) or (A==1))
switch(A)
{
case 0: if (B==0) X=0;else X=1; break;
case 1 : X=1; break;
cout<<"X="<<X<<endl;
}
else cout<<"Pomulka vhidnyh danyh";
	
		return 0;
}
