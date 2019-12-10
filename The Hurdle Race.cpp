//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector <int> height,int n) {
    // Complete this function
    int result[n];
    int max = 0;
    for(int i = 0;i<n;i++){
        if(height[i]>k){
            result[i] = height[i]-k;
        }
        else{
            result[i] = 0;
        }
    }
    for(int i = 0;i<n;i++){
        if(result[i]>max){
            max = result[i];
        }
    }
    return max;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int result = hurdleRace(k, height,n);
    cout << result << endl;
    return 0;
}
