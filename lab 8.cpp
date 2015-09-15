#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    char S[100];
    int count1=0,count2=0;
    gets(S);
 for (int i=0; i<strlen(S); i++){count1++;}
 for (int i=0; i<strlen(S); i++)
      {if(S[i]==' ') count2++;}
 cout<<count1-count2<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
