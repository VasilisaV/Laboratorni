#include <cstdlib>
#include <iostream>
#include <string.h>
#include <math.h>

#define a 1.42
#define x 1.39
#define y 0.68
#define z 0.98

#define p(k) sqrt(k*k+a*a)/(a*k)+(a*k)

using namespace std;

int main(int argc, char *argv[])
{
     double func;
    
     func = (sqrt(p(x)) / sin(x)) + (tan(y) / log(y)) - (p(z));
    
     cout << func <<endl;    
    
    system("PAUSE");
    return 0;
}
