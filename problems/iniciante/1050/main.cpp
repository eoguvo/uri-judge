#include <iostream>
#include <map>
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    map<int, string> dddMap = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}
    };
    int ddd; cin>>ddd;
    if(dddMap.find(ddd)!=dddMap.end()) {
        cout<<dddMap[ddd]<<endl;
    } else {
        cout<<"DDD nao cadastrado"<<endl;
    }
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1050