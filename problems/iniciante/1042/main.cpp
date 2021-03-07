#include <iostream>
#define endl "\n";
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[4], sortedarr[4];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
        sortedarr[i] = arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(sortedarr[i]<sortedarr[j]) {
                std::swap(sortedarr[i],sortedarr[j]);
            }
        }   
    }
    for (int i = 0; i < 3; i++) {
        cout<<sortedarr[i]<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 3; i++) {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1042