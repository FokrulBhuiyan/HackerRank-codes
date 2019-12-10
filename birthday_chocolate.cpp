//===================written By Fokrul Bhuiyan=============

#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> s,int d, int m ){
    int count = 0;
    for(int i = 0;i<n;i++){
            int x = 0;
        for(int j = i;j<m+i;j++){
            x = x+s[j];
        }
        if(x == d){
            count++;
        }
        }
    return count;
    }


int main(){
    int n;
    cin>>n;
    vector<int> s(n);
    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    int d,m;
    cout<<"Enter day and month: "<<endl;
    cin>>d>>m;
    int result = solve(n, s, d, m);
    cout<<result<<endl;
return 0;
}
