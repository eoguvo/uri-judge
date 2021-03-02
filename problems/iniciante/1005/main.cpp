#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    double a,b;
    cin>>a>>b;
    cout<<"MEDIA = "
        << fixed << setprecision(5) << setfill('0')
        <<(a*3.5+b*7.5)/11
        << endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1005
