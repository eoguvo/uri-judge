#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>c && d>a && c+d > a+b && c>0 && d>0 && a%2==0)  {
        cout<<"Valores aceitos"<<endl;
        return 0;
    }
    cout<<"Valores nao aceitos"<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1035