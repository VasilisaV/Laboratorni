#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char *argv[]) {	
	double f, t, h, z;
	
	cout <<"vvedit h=";
	cin >> h;
	cout <<"vvedit t=";
	cin >>t;
	
	f=h*exp(t)+(3*h)/(cos(t)+4);
	z=(h+ sin(t+4*h))/(pow(h,2)+t);
	
	cout<<endl;
	
	cout <<"f="<<f<< endl;
	cout <<"z="<<z;
	
	cout<<endl;
	
	return 0;
}
