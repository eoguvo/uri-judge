#include <iostream>
#include <iomanip>
#define tofixed(x) fixed <<setprecision((x))<<setfill('0')
using namespace std;
int main(int argc, char const *argv[])
{
    int time, hours, minutes, seconds;
    cin>>time;
    hours = time / 3600;
    time %= 3600;
    minutes = time / 60;
    seconds = time % 60;
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1019