#include <iostream>
#include<math.h>

using namespace std;

int main(int argc, char *argv[]) {
	double A[12],b,S=0,max, z;
	int i, imax;
	
	cout<<"vvedit b=";
	cin>>b;
	cout<<endl;
	
	for (i=0; i<=11; i+=4)
	{
		cout<<"A["<<i+1<<"]=";
		cin>>A[i];
	}
	
	max=A[0];
	
	for (i=0; i<=11; i+=4)
		S=S+A[i];
	cout<<endl;
	
	for (i=0; i<=11; i+=4)
	{
		if (A[i] > max)
		{
			max = A[i];
			imax=i;
		}   
	}

	if (S>b)
	{
		A[imax] = A[8];
		A[8] = max;
	}

	for (i=0; i<=11; i+=4)
		cout<<A[i]<<endl;
	cout<<endl;
	
	return 0;
}
