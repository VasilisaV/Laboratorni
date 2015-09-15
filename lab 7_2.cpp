#include <iostream>
using  namespace std;
int main(int argc, char *argv[]) {
	
	int i,j, n, m;
	double A[n][m], x;
	
	cout<<"Vvedit kilkist ryadkiv v masyvi M >> "; 
	cin>>n;
	cout<<"Vvedit kilkist stovpciv v masyvi N >> "; 
	cin>>m;	
	
	cout<<endl;
	
	for (i=0; i<n;i++)
	{	for(j=0;j<m;j++)
		{	cout<<"A["<<i+1<<"]["<<j+1<<"]=";
			cin>>A[i][j];
		}
	}
	
	cout<<endl;
	x=1;
	
	for (i=0; i<n;i++)
		for(j=0;j<m;j++)
			x=x*A[i][j];
		
	cout<<"Dobutok elevtntiv masymu A["<<n <<"]["<<m <<"] = "<<x;
	return 0;
}
