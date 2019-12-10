//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int main(){
    int q,n,flag=0;
    cin>>q;
    for(int i =0;i<q;i++){
        cin>>n;
        int con[n][n],r[n]={0},c[n]={0};
        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>con[i][j];
                r[i]+=con[i][j];
                c[j]+=con[i][j];
            }
        }
        sort(r,r+n);
        sort(c,c+n);
        for(int i =0;i<n;i++){
                cout<<r[i]<<" "<<c[i]<<endl;
        }
        for(int i =0;i<n;i++){
            if(r[i]!=c[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"Possible"<<endl;
            flag=0;
        }
        else{
            cout<<"Impossible"<<endl;
            flag=0;
        }
    }
}
