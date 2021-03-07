#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    a*=2; b*=3; c*=4; d*=1;
    float media =  (a+b+c+d)/10;
    float newmedia = -1.00, newrate;
    string status;
    if(media>=7.0) {
        status = "Aluno aprovado.";
    } else if(media<5.0) {
        status = "Aluno reprovado.";
    } else {
        cin>>newrate;
        newmedia = (media+newrate)/2;
        status = "Aluno em exame.";
    }
    cout<<"Media: "<<tofixed(1)<<media<<endl<<status<<endl;
    if(newmedia >= 0) {
        cout<<"Nota do exame: "<<tofixed(1)<<newrate <<endl
            <<(newmedia>=5.0 ? "Aluno aprovado." : "Aluno reprovado.")<<endl
            <<"Media final: "<<tofixed(1)<<newmedia<<endl;
    }
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1040
