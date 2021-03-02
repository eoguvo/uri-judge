#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
#define KML 12
using namespace std;
int main(int argc, char const *argv[])
{
    float time, vel;
    cin>>time>>vel;
    cout<<tofixed(3)<<(time*vel)/KML<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1017