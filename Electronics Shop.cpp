//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s,int n, int m){
    // Complete this function
    int x = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(keyboards[i]+drives[j] <= s)
                x = max(x,keyboards[i]+drives[j]);
        }
    }
    return x;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s, n, m);
    cout << moneySpent << endl;
    return 0;
}
