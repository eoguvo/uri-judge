#include <iostream>
using namespace std;
const int YEAR = 365;
const int MONTH = 30;
int main(int argc, char const *argv[])
{
    int age;
    cin>>age;
    cout<<age/YEAR<<" ano(s)"<<endl;
    age%=YEAR;
    cout<<age/MONTH<<" mes(es)"<<endl;
    age%=MONTH;
    cout<<age<<" dia(s)"<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1020