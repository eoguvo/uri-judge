#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    string name;
    double s,v;
    cin>>name>>s>>v;
    cout<<"TOTAL = R$ "
        << fixed << setprecision(2) << setfill('0')
        << s+((15*v)/100)
        << endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1009
