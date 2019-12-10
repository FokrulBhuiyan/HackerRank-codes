//===================written By Fokrul Bhuiyan=============

#include<bits/stdc++.h>
using namespace std;

void CutSticks(int temp[],int n){
    int x,i = 1;
    while(n){
        if(x=temp[i]){
            cout<<n<<endl;
            n = n-x;
        }
        i++;
    }
}

int main() {
  int n, temp[10001]={0};
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
    temp[arr[i]]++;
  }
  CutSticks(temp,n);
return 0;
}
