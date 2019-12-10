
//===================written By Fokrul Bhuiyan=============

#include<bits/stdc++.h>

using namespace std;
int main() {
    int n,k,bc, ba,b = 0,r;
    cin>>n>>k;
    vector <int> c(n);
    for(int i = 0;i<n;i++){
        cin>>c[i];
    }
    cin>>bc;
    for(int i = 0;i<n;i++){
    if(i!=k){
        b = b + c[i];
    }
    }
    ba = b/2;
    r = bc - ba;
    if(r!=0){
    cout<<r;
    }
    else{
        cout<<"Bon Appetit";
    }
    return 0;
}
