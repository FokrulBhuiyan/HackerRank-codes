//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int findValue(int n,int i,int j,int x,int y,map <pair<int,int>,int> p)
{
    int count=0;
    while((i>0 && i<=n && j>0 && j<=n) && !p[{i,j}]){
        i+=x;
        j+=y;
        count++;
    }
    return count;
}
int main()
{
    int n,k,posrn,poscn,ans=0;
    cin>>n>>k>>posrn>>poscn;
    int arrxk[k],arryk[k];
    for(int i = 0;i<k;i++){
         cin>>arrxk[i];
         cin>>arryk[i];
    }
    map <pair<int,int>,int> p;
    while(k--){
        p[{arrxk[k],arryk[k]}]=1;
    }
    ans += findValue(n,posrn+1, poscn,1,0, p);
    ans += findValue(n,posrn-1, poscn,-1,0, p);
    ans += findValue(n,posrn, poscn+1,0,1, p);
    ans += findValue(n,posrn, poscn-1,0,-1, p);
    ans += findValue(n,posrn+1, poscn+1,1,1, p);
    ans += findValue(n,posrn+1, poscn-1,1,-1, p);
    ans += findValue(n,posrn-1, poscn+1,-1,1, p);
    ans += findValue(n,posrn-1, poscn-1,-1,-1, p);
    cout<<ans<<endl;
}
