#include <iostream>
#define endl "\n"
using namespace std;
int main(int argc, char const *argv[])
{
    const string months[12] = {
            "January", "February", "March", "April", 
            "May", "June", "July", "August", "September",
            "October", "November", "December"
        };
    int n; cin>>n;
    if(n<=0 || n>=13) return 0;
    cout<<months[n-1]<<endl;
    return 0;
}

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1052

/*
    January - 31 days
    February - 28 days in a common year and 29 days in leap years
    March - 31 days
    April - 30 days
    May - 31 days
    June - 30 days
    July - 31 days
    August - 31 days
    September - 30 days
    October - 31 days
    November - 30 days
    December - 31 days
    by: https://www.timeanddate.com/calendar/months/
*/
