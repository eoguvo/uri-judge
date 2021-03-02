#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
using namespace std;
int main(int argc, char const *argv[])
{
    double n, arr[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01}; 
    cin>>n;
    cout<<"NOTAS:\n";
    int t=0; 
    n+=1e-9; 
    while(arr[t]>=0.01) {
        int c = 0;
        while (n>arr[t]) {
            n-=arr[t];
            c++;
        }
        if(arr[t]==1.0) {
            cout<<"MOEDAS:\n";
        }
        if(arr[t]>1.0) {
            cout<<c<<" nota(s) de R$ "<<tofixed(2)<<arr[t]<<endl;
        } else {
            cout<<c<<" moeda(s) de R$ "<<tofixed(2)<<arr[t]<<endl;
        }
        t++;
    }
    return 0;
}

