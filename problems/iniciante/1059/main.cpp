#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 100; i++) {
        if(i%2==0) cout<<i<<endl;
    }
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1059