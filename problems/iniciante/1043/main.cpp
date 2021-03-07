#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
#define endl "\n";
using namespace std;
int main(int argc, char const *argv[])
{
    float a,b,c,per,area;
    cin >> a>>b>>c;
    if(a+b>c && b+c>a && c+a>b) {
        per=a+b+c;
        cout<<"Perimetro = "<<tofixed(1)<<per<<endl;
        return 0;
    }
    area = .5*(a+b)*c;
    cout<<"Area = "<<tofixed(1)<<area<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1043