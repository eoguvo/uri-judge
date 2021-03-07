#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    int pos = 0;
    float nums = 0;
    for (int i = 0; i < 6; i++){
        float x;
        cin>>x;
        if(x>0) {
            pos++;
            nums+=x;
        }
    }
    cout<<pos<<" valores positivos"<<endl
        <<tofixed(1)<<nums/pos<<endl;
    return 0;
}
