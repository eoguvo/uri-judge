#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float n; cin>>n;
    string inter;
    if(n>=0&&n<=25.0000){inter = "Intervalo [0,25]";}
    else if (n>=25.00001&&n<=50.0000000){inter = "Intervalo (25,50]";}
    else if (n>=50.000001&&n<=75.0000000){inter = "Intervalo (50,75]";}
    else if (n>=75.000000001&&n<=100.000000000){inter = "Intervalo (75,100]";} 
    else {inter = "Fora de intervalo";}
    cout<<inter<<"\n";
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1037
