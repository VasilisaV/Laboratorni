#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {
	double S, a;
	int i;
	
	cout<<"vvedit a=";
	cin>>a;
	S=0;
	cout<<endl;
	
	for (i=1; i<=20; i++)
	S+=a/i;
	
	cout<<"Suma="<<S<<endl;

	return 0;
}
