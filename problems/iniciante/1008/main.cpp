#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,h;
    float s;
    cin>>n>>h>>s;
    cout<<"NUMBER = "<<n << endl
        <<"SALARY = U$ "
        << fixed << setprecision(2) << setfill('0')
        << (s*h)
        <<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1008
