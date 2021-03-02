#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    double a,b,c;
    cin>>a>>b>>c;
    a*=2;b*=3;c*=5;
    cout<<"MEDIA = "
        << fixed << setprecision(1) << setfill('0')
        <<(a+b+c)/10
        << endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1006
