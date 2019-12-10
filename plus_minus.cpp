//===================written By Fokrul Bhuiyan=============

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int arr[100];
    int n, x = 0, y =0 , z = 0;
    float a, b, c;
    cin >> n;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < n;arr_i++){
       if(arr[arr_i] > 0){
           x = x + 1;
       }
       else if(arr[arr_i] < 0){
           y = y + 1;
       }
       else{
           z = z + 1;
       }
    }
    a = x / n;
    b = y / n;
    c = z / n;
    cout<< a<< b << c << endl;
    return 0;
}
