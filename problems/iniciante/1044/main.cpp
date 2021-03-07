#include <iostream>
#define endl "\n";
using namespace std;
int main(int argc, char const *argv[])
{
    int x,y; cin >> x >> y;
    if(y%x==0||x%y==0) {
        cout<<"Sao Multiplos"<<endl;
    }
    else {
        cout<<"Nao sao Multiplos"<<endl;
    }
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1044
