#include <iostream>
#include <iomanip>
using namespace std;
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
int main(int argc, char const *argv[])
{
    double dist,km;
    cin >> dist >> km;
    cout<< tofixed(3)
        << dist/km
        << " km/l"
        << endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1014
