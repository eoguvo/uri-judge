#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int _,qt;
    float val,total;
    for (int i = 0; i < 2; i++) {
        cin>>_>>qt>>val;
        total += val*qt;
    }
    cout<<"VALOR A PAGAR: R$ "
        <<fixed<<setprecision(2)<<setfill('0')
        <<total
        <<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1010
