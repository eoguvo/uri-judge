#include <iostream>
#define endl "\n";
using namespace std;
int main(int argc, char const *argv[])
{
    float x,y;
    cin>>x>>y;
    string res;
    if(x+y==0)
        res = "Origem";
    else if(x==0)
        res="Eixo Y";
    else if(y==0)
        res="Eixo X";
    else if(x>0 && 0>y)
        res = "Q4";
    else if(x<0 && 0<y)
        res = "Q2";
    else if(x>0 && 0<y)
        res = "Q1";
    else if(x<0 && 0>y)
        res = "Q3";
    cout<<res<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1041
