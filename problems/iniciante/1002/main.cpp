#include <iomanip>
#include <iostream>
#define PI 3.14159
using namespace std;
int main(int argc, char const *argv[])
{
    double r;
    cin>>r;
    cout<< "A=" 
        << fixed << setprecision(4) << setfill('0')
        << PI*(r*r) 
        << endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1002
