//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a=0,x,p=0;
    cin>>n;
    int arr[n],b[10000];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;i<n;j++){
            if(arr[i]==arr[j]){
                b[p] = j-i;
                p++;
                a=p;
            }
        }
    }

    x = b[0];
    for(int i = 1;i<a;i++){
        if(b[i]<x){
            x = b[i];
        }
    }
    if(p!=0){
        cout<<x;
    }
    else
        cout<<-1;
return 0;
}
