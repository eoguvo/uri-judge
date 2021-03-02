#include <iostream>
#include <iomanip>
using namespace std;
int abs(int a) {return a<0? a*-1 : a;}
#define MAX(a, b) (((a)+(b)+abs((a)-(b)))/2)
int main(int argc, char const *argv[])
{
    int a,b,c;
    cin >> a >> b >> c;
    cout<< MAX(a,MAX(b,c))
        <<" eh o maior"<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1013
