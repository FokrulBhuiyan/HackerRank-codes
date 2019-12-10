//===================written By Fokrul Bhuiyan=============

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,arr[101]={0},count = 0,max = 0,temp = 0;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>k;
        arr[k]++;
        if(max<arr[k]){
        max = arr[k];
        temp = k;
        }
    }
    for(int i = 0;i<101;i++){
        if(i != temp){
            count = count+arr[i];
        }
    }
    cout<<count;
return 0;
}
