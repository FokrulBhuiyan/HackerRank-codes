//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int main(){
	int p,d,m,s,x=0,count = 0;
	cin>>p>>d>>m>>s;
	while(s>=m){
		if(p>m){
			s = s-p;
			p = p - d;
			
		}
		else{
			s = s-m;
		}
		count++;
	}
	cout<<count<<endl;
}


