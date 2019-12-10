//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,t,x;
	cin>>n>>t;
	int width[n],test[t][2];
	for(int i = 0;i<n;i++){
		cin>>width[i];
	}
	for(int i = 0;i<t;i++){
		for(int j = 0;j<2;j++){
			cin>>test[i][j];
		}
		x = width[test[i][0]];
		for(int k = test[i][0]+1;k<=test[i][1];k++){
			
			if(x>width[k]){
				x=width[k];
			}
		}
		cout<<x<<endl;
	}
	
}
