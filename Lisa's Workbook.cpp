 //===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,page=0,temp,s=0;
	cin>>n>>k;
	int arr[n];
	for(int i = 0;i<n; i++){
		cin>>arr[i];
	}
	for(int i = 0;i<n; i++){
		page++;
		temp = 1;
		while(arr[i]>0){
			arr[i]--;
			if(page == temp){
				s = s+1;
			}
			if(temp%k==0 && arr[i]!=0){
				page++;
			}
			temp++;
		}
	}
	cout<<s;
}
