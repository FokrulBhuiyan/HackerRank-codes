//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;


string solve(int year)
{
    int m = 215;
    short int feb;
    if(year < 1918)
        feb = year%4 ? 28 : 29;
    else if(year > 1918) //gregorian
        feb = !(year%400) || year%100&&!(year%4) ? 29 : 28;
    else
        feb = 15;
    feb = 256 - (feb + m);
    return to_string(feb) + ".09." + to_string(year);
}
int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result<< endl;
    return 0;
}
