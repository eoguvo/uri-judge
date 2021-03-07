#include <iostream>
#define endl "\n";
using namespace std;
int main(){
    int a,b,c,d,hours,minutes;
    cin>>a>>b>>c>>d;
    hours=c-a;
    if(hours<0){
        hours=24+(c-a);
    }
    minutes=d-b;
    if(minutes<0){
        minutes=60+(d-b);
        hours--;
    }
    if(hours<0) {hours+=24;}
    if(a==c && b==d){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    } else {
        cout<<"O JOGO DUROU "<<hours<<" HORA(S) E "<<minutes<<" MINUTO(S)"<<endl;
    }

    return 0;
}
// wow thats hard
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1047
