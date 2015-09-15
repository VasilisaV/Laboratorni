#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {
	double x1,x2,y,C,D,A1,A2;
	C=1.231;
	D=1.152;
	
	cout <<"vvedit x1=";
	cin >> x1;
	cout <<"vvedit x2=";
	cin >> x2;
	cout <<"vvedit y=";
	cin >> y;
	cout<<endl;

if (x1<=y) A1=log10(C*x1+y);
else A1=pow(x1,1.0/3.0)+D*exp(y);

if (x2<=y) A2=log10(C*x2+y);
else A2=pow(x2,1.0/3.0)+D*exp(y);

	cout <<"A1="<<A1<< endl;
	cout <<"A2="<<A2;
	cout<<endl;
	return 0;
}
