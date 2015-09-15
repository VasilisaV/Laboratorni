#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {
	double x,y,a,b,h;
	
	cout<<"Pochatok intervaly="; cin>>a;
	cout<<"Kinez intervaly="; cin>>b;
	cout<<"Krok="; cin>>h;
	cout<<endl;
	
	x=a;
	while (x <=b)
	{ y=((cos(x)+log10(x)/(4+x))+x*x);
	cout<<"x="<<x<<endl <<" y="<<y <<endl;
	x+=h;
	}
	return 0;
}
