#include <iostream>
#define endl "\n"
int max(int a, int b) {return a<b?b:a;}
int min(int a, int b) {return a>b?b:a;}
using namespace std;
int main(int argc, char const *argv[])
{
    int x,y, sum = 0;
    cin>>x>>y;
    x = max(x,y);
    y = min(y,x)+1;
    if(y%2==0) y+=1;
    for (int i = y; i < x; i+=2){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1071