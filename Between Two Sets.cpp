//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b , int n,int m) {
    // Complete this function
    int count = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0; j<m;j++){
            if(b[j]%a[i] == 0 ){
                    if(b[j]%a[i+1] == 0){
                count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b , n , m );
    cout << total << endl;
    return 0;
}
