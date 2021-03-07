#include <iostream>
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    int pos = 0;
    for (int i = 0; i < 5; i++){
        int x;
        cin>>x;
        if(x%2==0) pos++;
    }
    cout<<pos<<" valores pares"<<endl;
    return 0;
}
