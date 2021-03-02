#include <iostream>
#include <math.h> 
#include <iomanip>
using namespace std;
#define PI 3.14159
double calc(double x) {
    return ((4.0/3.0)* PI * pow(x,3));
}
int main(int argc, char const *argv[]) {
    float x;
    cin>>x;
    cout<< "VOLUME = " 
        << fixed << setprecision(3) << setfill('0')
        << calc(x)
        << endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1011
