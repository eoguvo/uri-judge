#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    float sal, val;
    cin>>sal;
    if(sal<0) return 0;
    if(sal>=0 and sal<=2000) {
        cout<<"Isento"<<endl;
        return 0;
    }
    if (sal<=3000.00) {val = (sal-2000)*.08;}
    else if (sal<=4500.00) {val = (sal-3000)*.18+1000*.08;}
    else {val = (sal-4500)*.28+1500*.18+1000*.08;}
    cout<<"R$ "<<tofixed(2)<<val<<endl;
    return 0;
}

// juros compostos :(
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1051