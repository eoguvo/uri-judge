#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
using namespace std;
int main(int argc, char const *argv[])
{
    const double prices[] = {4.00,4.50,5.00,2.00,1.50};
    int id, qt;
    cin>>id >> qt;
    cout<<"Total: R$ " << tofixed(2) << prices[id-1] * qt << endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1038