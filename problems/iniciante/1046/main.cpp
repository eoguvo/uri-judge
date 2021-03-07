#include <iostream>
#define endl "\n";
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b, time; cin>>a>>b;
    if(a==b) {time=24;}
    else if(a<=b) {
        time = b-a;
    } else {
        time = (24-a)+b;
    }
    cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1046
