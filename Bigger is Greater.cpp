//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin>>s;
        if(next_permutation(s.begin(),s.end()))
            cout <<s<<endl;
        else
            cout <<"no answer"<<endl;
    }
return 0;
}
