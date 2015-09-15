#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) 
{
	int i;
	double a[20], s=0;
	
	for (i = 0; i <= 19; i++)
	{
		cout <<"A" <<i+1<<" = ";
		cin >> a[i];
		
		if (a[i]>0) s=s+a[i];
	}
	
	cout << s <<endl;
	
	cout << endl;
	return 0;
	
}
