//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;
#define range 4

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function

}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
