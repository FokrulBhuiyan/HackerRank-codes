//===================written By Fokrul Bhuiyan=============

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count = 0;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = 0;i<=n-2;){
        if(arr[i]==0 && arr[i+2]==0){
            count++;
            i= i+2;
        }
        else if(arr[i]==0 && arr[i+1]==0){
            count++;
            i++;
        }
    }
    cout<<count;
return 0;
}
