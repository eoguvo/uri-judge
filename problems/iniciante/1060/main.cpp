#include <iostream>
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    int pos = 0;
    for (int i = 0; i < 6; i++){
        float x;
        cin>>x;
        if(x>0) pos++;
    }
    cout<<pos<<" valores positivos"<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1060