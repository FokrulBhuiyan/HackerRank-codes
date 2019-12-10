//===================written By Fokrul Bhuiyan=============

#include <cmath>
//===================written By Fokrul Bhuiyan=============

#include <cstdio>
//===================written By Fokrul Bhuiyan=============

#include <vector>
//===================written By Fokrul Bhuiyan=============

#include <iostream>
//===================written By Fokrul Bhuiyan=============

#include <algorithm>
using namespace std;


int main(){
    int a[100][100];
    int n, x = 0 , y = 0,sum;
    cin >> n;
    //vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }

    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
          if(i == j){
          x = x + a[i][j];
          }
       }
    }


    for(int i = n-1;i >= 0;i--){
       for(int j = 0;j < n;j++){
          if(j == n-1 - i){
          y = y + a[i][j];
          }
       }
    }
    sum = x - y ;
    cout << abs(sum);
    return 0;
}
