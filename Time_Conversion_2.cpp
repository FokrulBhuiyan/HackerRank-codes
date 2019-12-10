//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>
#include<string.h>

using namespace std;

string timeConversion(string str) {
    // Complete this function
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    string c, result = str;
    cin>>c;
    if(strcmp(c,"pm")== 0 && hh!=12){
    hh = hh+12;
    return result;
    }
    else{
    return str;
    }
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
