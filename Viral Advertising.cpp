//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    // Complete this function
    int k = 5,x = 2;
    for(int i = 2;i<=n;i++){
        k = floor(k/2)*3;
        x = x + floor(k/2);
    }
    return x;
}

int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}
