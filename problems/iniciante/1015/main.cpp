#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')

double calc(double x1, double x2, double y1, double y2) {
    double res = pow(x2-x1,2)+pow(y2-y1,2);
    return sqrt(res);
}
int main(int argc, char const *argv[])
{
    double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout<< tofixed(4) 
        << calc(x1,x2,y1,y2)
        << endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1015