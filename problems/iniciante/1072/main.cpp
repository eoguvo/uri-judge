#include <iostream>
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    int n, in=0, out=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x>=10 && x<=20) in++;
        else out++;
    }
    cout<<in<<" in"<<endl
        <<out<<" out"<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1072
