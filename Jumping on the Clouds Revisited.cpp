//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, e = 100;
    cin>>n>>k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i<n; i = i+k){
        e = e - 1 -arr[i]*2;
    }
    cout<<e;
return 0;
}
