#include <iostream>
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    int n; cin>>n;
    if(n%2!=1) n+=1;
    for (int i = n, j=0; j < 6; i+=2,j++) {
        cout<<i<<endl;
    }
    return 0;
}
