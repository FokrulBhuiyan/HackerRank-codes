//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n,c,m;
	cin>>t;
	for(int i = 0;i<t;i++){
		cin>>n>>c>>m;
		int x = n/c;
		if(x==m){
			x=x+1;
			cout<<x<<endl;
		}
		else if(x<m){
			cout<<x<<endl;
		}
		else{
			int count = 0,p = x;
			while(p>0){
				p = p - m;
				count++;
				x = x+1;
			}
			p = p+count;
			if(p>=m){
				x = x+1;
			}
			cout<<x;
		}
	}
}
