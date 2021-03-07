#include <iostream>
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    int d1,h1,m1,s1,d2,h2,m2,s2
        ,day,hour,minute,second;
    string _;
    cin >>_>>d1>>h1>>_>>m1>>_>>s1
        >>_>>d2>>h2>>_>>m2>>_>>s2;
    day = d2-d1;
    hour = h2-h1;
    minute = m2-m1;
    second = s2-s1;
    if(second<0) {second+=60;minute--;}
    if(minute<0) {minute+=60;hour--;}
    if(hour<0) {hour += 24; day--;}
    cout<<day<<" dia(s)"<<endl
        <<hour<<" hora(s)"<<endl
        <<minute<<" minuto(s)"<<endl
        <<second<<" segundo(s)"<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1061
