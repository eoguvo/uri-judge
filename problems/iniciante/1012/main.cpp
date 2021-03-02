#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
#define PI 3.14159
int main(int argc, char const *argv[])
{
    double a,b,c;
    cin>>a>>b>>c;
    double tri = (a*c)/2,
        cir = pow(c,2)*PI,
        tra = (a+b)*c/2,
        qua = b*b,
        ret = a*b;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",tri,cir,tra,qua,ret);
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1012
