//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;
#define MAX 100000
int length = 0;
int temp[MAX];

void multiply(int n){
    long i,r=0;
    int arr[MAX];
    for(i=0;i<=length;i++){
            arr[i]=temp[i];
        }
    for(i=0;i<=length;i++){
         temp[i] = (arr[i]*n + r)%10;
         r = (arr[i]*n + r)/10;
    }
    if(r!=0){
         while(r!=0){
             temp[i]=r%10;
             r= r/10;
             i++;
         }
    }
    length = i-1;
}

void Factorials(int n){
    for(int i=1;i<=n;i++){
         multiply(i);
    }
}


int main(){
    int n;
    cin>>n;
    temp[0]=1;
    Factorials(n);
    for(int i=length;i>=0;i--){
         cout<<temp[i];
    }
    return 0;
}
