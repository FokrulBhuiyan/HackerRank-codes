//===================written By Fokrul Bhuiyan=============

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,b,w,bc,wc,z,x;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>b>>w>>bc>>wc>>z;
        if(bc<=z && wc<=z){
            x = b*bc+w*wc;
            cout<<x<<endl;
            continue;
        }
        else if(bc>z ){
            x = b*(wc+z)+w*wc;
            cout<<x<<endl;
            continue;
        }
        else if(wc>z){
            x = b*bc+w*(bc+z);
            cout<<x<<endl;
            continue;
        }
    }
return 0;
}
