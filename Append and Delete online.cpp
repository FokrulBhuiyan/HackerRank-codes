//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int i = 0;
    for(;i<min(s.length(),t.length());i++){
        if(s[i] != t[i]){
            break;
        }
    }
    int min = (s.length()-i)+(t.length()-i);
    int count = min;
    while(count<k){
        if(i--<=0){
            count++;
        }
        else{
            count= count+2;
        }
    }
    if(count==k){
        return "Yes";
    }
    else{
        return "No";
    }
}

int main()
{
    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;


    string result = appendAndDelete(s, t, k);

    cout << result << "\n";


    return 0;
}
