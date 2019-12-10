//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[100],x = 0,y = 0,a = arr[0] ,b = arr[0] ;
    for(int i = 0; i < 5; i++){
       cin >> arr[i];
    }
    for(int i = 1; i < 5; i++){
            if(a<arr[i]){
       a =  arr[i];
       }

    }
    for(int i = 1; i < 5; i++){
            if(b>arr[i]){
       b =  arr[i];
       }

    }
    for(int i = 0; i < 5; i++){
    if(arr[i]!= a){
        x = x+arr[i];
    }
    if(arr[i]!= b){
        y = y+arr[i];
    }
    }
    cout<<x<< endl;
    cout<<y<< endl;
    return 0;
}
