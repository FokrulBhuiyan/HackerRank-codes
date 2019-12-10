//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int formingMagicSquare(vector < vector<int> > s) {
    // Complete this function
    int x , y = 0;
    int ns[3][3]={4,9,2,3,5,7,8,1,6};
    for(int i = 0;i < 3;i++){
       for(int j = 0;j < 3;j++){
          if(s[i][j]!=ns[i][j]){
            x = abs(ns[i][j]-s[i][j]);
            y = x + y;
          }
       }
    }
    return y;
}

int main() {
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> s[s_i][s_j];
       }
    }
    int result = formingMagicSquare(s);
    cout << result << endl;
    return 0;
}
