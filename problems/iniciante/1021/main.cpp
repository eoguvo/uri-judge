#include <iostream>
#include <cmath> //fmod
#include <iomanip> // tofixed
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
using namespace std;

string formatedText(double *qt, double val) {
    const string type = val>1.00 ? " nota(s)" : " moeda(s)";
    ostringstream ss;
    ss << (int)(*qt/val)<<type<<" de R$ "<<tofixed(2)<<val<<endl;
    *qt = fmod(*qt, val);
    return ss.str();
}

int main(int argc, char const *argv[])
{
    double val;
    double notas[10] = {100.00,50.00,20.00,10.00,5.00,2.00},
        coins[10] = {1.00,0.50,0.25,0.10,0.05,0.01};
    cin>>val;
    if(0 < val < 1000000.00) {
        cout<<"NOTAS:"<<endl;
        for (int i = 0; i < 6; i++)
        {
            cout<<formatedText(&val,  notas[i]);
        }
        cout<<"MOEDAS:"<<endl;
        for (int i = 0; i < 6; i++)
        {
            cout<<formatedText(&val,  coins[i]);
        }
    }
    
    return 0;
}

/*
    this question gets "Wrong answer (100%)"
    see "try2.cpp" in same folder
*/
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1021