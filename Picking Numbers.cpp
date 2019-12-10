//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector <int> a) {
    // Complete this function
    int z=0;
    int freq[100]={0};
    for(int i=0;i<a.size();i++)
        freq[a[i]]++;

    for(int i=2;i<100;i++)
        z=max(z,freq[i]+freq[i-1]);
    return z;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = pickingNumbers(a);
    cout << result << endl;
    return 0;
}
