#include <iostream>
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    int par=0,impar=0,pos=0,neg=0;
    for (int i = 0; i < 5; i++){
        int x;
        cin>>x;
        if(x>0) pos++;
        else if(x<0) neg++;
        if(x%2==0) par++;
        else if (x%2==1 || x%2==-1) impar++;
    }
    cout<<par<<" valor(es) par(es)"<<endl
        <<impar<<" valor(es) impar(es)"<<endl
        <<pos<<" valor(es) positivo(s)"<<endl
        <<neg<<" valor(es) negativo(s)"<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1066
