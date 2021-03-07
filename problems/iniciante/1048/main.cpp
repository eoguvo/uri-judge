#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
#define endl "\n"
using namespace std;

void percentage(int percent);
float fullval;
int main(int argc, char const *argv[])
{
    cin>>fullval;
    if(fullval>=0.0 and fullval<=400.00) {percentage(15);}
    else if(fullval<=800.00) {percentage(12);}
    else if(fullval<=1200.00) {percentage(10);}
    else if(fullval<=2000.00) {percentage(7);}
    else {percentage(4);}
    return 0;
}

void percentage(int percent) {
    float npercent = (fullval*percent)/100;
    cout<<"Novo salario: "<<tofixed(2)<<npercent+fullval<<endl
        <<"Reajuste ganho: "<<tofixed(2)<<npercent<<endl
        <<"Em percentual: "<<percent<<" %"<<endl;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1048
