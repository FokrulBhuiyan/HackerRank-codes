//===================written By Fokrul Bhuiyan=============

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,temp = 0;
	cin>>n,m;
	int arr[m];
	if(n==m){
		cout<<0;
		return 0;
	}
	for(int i = 0;i<m;i++){
			cin>>arr[i];
		}
	sort(arr.begin(),arr.end());
	int x = 0,y = 0,z = 0;
	for(int i = 1;i<m;i++){
		x = arr[i-1];
		y = arr[i];
		for(int i = x+1;i<y;i++){
			z = max(z,min(i-x,y-i));
		}
		temp = max(temp,z);
	}
	cout<<max(temp,(n-1)-arr[m-1])<<endl;
	return 0;
}
