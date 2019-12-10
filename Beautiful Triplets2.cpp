//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int binary_search(int arr[],int a,int b,int x){

    int mid = (a+b)/2;
    if(arr[mid]==x){
        return 1;
    }
    else if(arr[mid]>x){
         binary_search(arr, a, mid-1,x);
    }
    else {
         binary_search(arr, mid+1,b,x);
    }

}

int main(){
    int n,d,count=0;
    cin>>n>>d;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = 0;i<n-2;i++){
      int a = arr[i]+d;
      int b = arr[i]+2*d;
      if(b>arr[n-1]){
        break;
      }
      int x = binary_search(arr,0,n-1,a);

      int y = binary_search(arr,0,n-1,b);

      if(x==1 && y==1){
        count++;
      }
    }
    cout<<count;
return 0;
}
