//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int count = 0;
    while(s!=t && count!=k){
        if(s.length()==t.length()){
            s = s.erase(s.length(),1);
            t = t.erase(t.length(),1);
            count = count+2;
            continue;
        }
        else if(s.length()>t.length()){
            s =s.erase(s.length(),1);
            count++;
            continue;
        }
        else{
            t =t.erase(t.length(),1);
            count++;
            continue;
        }
    }
    if(s==t){
        return "YES";
    }
    else{
        return "NO";
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
