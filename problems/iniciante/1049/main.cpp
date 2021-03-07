#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string v,t,f;
    cin>>v>>t>>f;
    if(v[0]=='v') {
        if(t[0]=='a') {
            if(f[0]=='c') {cout<<"aguia\n";}
            else {cout<<"pomba\n";}
        }
        else {
            if(f[0]=='o') {cout<<"homem\n";}
            else {cout<<"vaca\n";}
        }
    }
    else {
        if(t[0]=='i') {
            if(f[2]=='m') {cout<<"pulga\n";}
            else {cout<<"lagarta\n";}
        }
        else {
            if(f[0]=='h') {cout<<"sanguessuga\n";}
            else {cout<<"minhoca\n";}
        }
    }
    return 0;
}

//https://www.urionlinejudge.com.br/judge/pt/problems/view/1049
