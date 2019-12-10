//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.


int main(){
    string s;
    getline(cin,s);
    int len = s.length();
    int lo = floor(sqrt(len)), hi = ceil(sqrt(len));
    int i, j;
    bool found = false;
    for(i = lo; i<=hi; i++){
        for(j = i; j<=hi; j++){
            if(i*j>=len) {
                found = true;
                break;
            }
        }
        if(found)
            break;
    }
    int start = j, finish = i, index = 0;
    for(i = 0; i<start; i++){
        for(j = 0; j<finish; j++){
            index = j*start+i;
            if(index<len)
            cout<<s[index];
        }
        cout<<" ";
    }
}
