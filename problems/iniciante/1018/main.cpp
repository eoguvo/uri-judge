#include <iostream>
#include <sstream>
using namespace std;
string formatedText(int *qt, int val) {
    ostringstream ss;
    ss << *qt/val<<" nota(s) de R$ "<<val<<",00";
    *qt%=val;
    return ss.str();
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<n<<endl;
    if(0<n<1000000) {
        cout<<formatedText(&n,100) << endl
            <<formatedText(&n,50) << endl
            <<formatedText(&n,20) << endl
            <<formatedText(&n,10) << endl
            <<formatedText(&n,5) << endl
            <<formatedText(&n,2) << endl
            <<formatedText(&n,1) << endl;
    }
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1018
