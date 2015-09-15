#include <cstdlib>
#include <iostream>
#include <string.h>
#include <math.h>
#define a 1.0
#define c 2.0
#define n 2
#define m 2

using namespace std;


double  fx (double b [n][m], int i)
{int j;
double xi=0;
for (j=0; j<m;j++)
{xi+=(a*b[i][j])/(c*b[i][j]*b[i][j]);}
return (xi);
}

void vvid (double b[n][m])
{ int i,j;
  for (i=0; i<n; i++)
  for (j=0; j<m;j++)
  {  
      cout<<"b["<<i+1<<"]["<<j+1<<"]=";
      cin>>b[i][j];
  }
  }
int main(int argc, char *argv[]) 
{ double F=0, b[n][m],sum1=0,sum2=0;
  int i,j;
  vvid (b);
  for (i=0; i<n; i++)
  {sum1+=fx(b,i)    ;
   sum2+=a*a*fx(b,i);}   
F=(sum1/a)+sum2;
cout<<"F="<<F<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
