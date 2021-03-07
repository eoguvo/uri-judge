#include <iostream>
#define endl "\n";
#define print(str) cout << str << endl
using namespace std;
int main(int argc, char const *argv[])
{
    float a, b, c; cin >> a >> b >> c;

    if(a<b) {std::swap(a,b);}
    if(b<c) {std::swap(b,c);}
    if(a<b) {std::swap(a,b);}

    if(a>=b+c) {print("NAO FORMA TRIANGULO");}
    else if(a*a==(b*b+c*c)) {print("TRIANGULO RETANGULO");}
    else if(a*a>(b*b+c*c)) {print("TRIANGULO OBTUSANGULO");}
    else if(a*a<(b*b+c*c)) {print("TRIANGULO ACUTANGULO");}
    if(a==b && a==c) {print("TRIANGULO EQUILATERO");}
    else if(a==b || b==c) {print("TRIANGULO ISOSCELES");}
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1045
