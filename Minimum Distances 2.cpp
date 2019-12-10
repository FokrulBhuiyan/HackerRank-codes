//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0,p=0,b[10000];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                b[k]=j-i;
                k++;
                p=k;
            }
        }
    }
    int temp=b[0];
    for(int i=0;i<p;i++){
        if(b[i]<temp)
            temp=b[i];
    }
    if(p!=0)
    cout<<temp;
    else
        cout<<-1;
    return 0;
}
