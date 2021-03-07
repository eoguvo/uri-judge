#include <iostream>
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    int n; cin>>n;
    for (int i = 1; i <= n; i++) {
        if(i%2!=0) cout<<i<<endl;
    }
    return 0;
}
