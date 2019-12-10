//===================written By Fokrul Bhuiyan=============

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long int n, x = 0,y = 0, count;
    cin >> n;
    long long int len = s.size();
    count = n/len;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a')
            x++;
        if (i < (n % len) && s[i] == 'a')
            y++;
    }
    cout << count * x + y << endl;
    return 0;
}
