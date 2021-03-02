#include <iostream>
#include <iomanip>
#include <math.h>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
using namespace std;
int main(int argc, char const *argv[])
{
    double a,b,c,delta;
    cin >> a >> b >> c;
    delta = pow(b,2)-4*a*c;
    if(delta<0 || a==0) {
        cout<<"Impossivel calcular"<<endl;
        return 0;
    }
    double d = sqrt(delta);
    double x1 = (-b+d)/(2*a),
        x2 = (-b-d)/(2*a);
    cout<<"R1 = "<<tofixed(5)<<x1<<endl
        <<"R2 = "<<tofixed(5)<<x2<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1036