#include <iostream>
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    int n; cin>>n;
    for (int i = 2; i <= n; i+=2) {
        cout<<i<<"^2 = "<<i*i<<endl;
    }
    return 0;
}
