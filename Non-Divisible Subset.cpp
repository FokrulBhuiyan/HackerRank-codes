//===================written By Fokrul Bhuiyan=============

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0;
    cin>>n>>k;
    int s[n],temp[n]={0};
    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++) {
        temp[s[i]%k]=temp[s[i]%k]+1;
    }
    count = min(temp[0],1);

    for(int i=1;i<=k/2;i++){
        if(i!=k-i) {
            count = count + max(temp[i],temp[k-i]);
            cout<<count<<endl;
        }
    }
    if(k%2==0)
        count++;
    cout<<count<<endl;
return 0;
}
