//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    // Complete this function
    int upd=0,ans=0,prev=0;
    for(int i=0;i<s.size();i++){
        prev = upd;
        if(s[i] == 'D') upd--;
        else upd++;
        if(upd == 0 && prev<0) ans++;
    }
    return x;

}

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int result = countingValleys(n, s);
    cout << result << endl;
    return 0;
}

