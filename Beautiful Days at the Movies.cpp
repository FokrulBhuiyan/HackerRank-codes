//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int beautifulDays(int i, int j, int k) {
    // Complete this function
    int rem,n,x = 0;
    for(int z = i;z<=j;z++){
            int n = z,rev = 0;
        while(n!= 0){
            rem = n%10;
            rev = rev*10+rem;
            n = n/10;
        }
        if(abs(rev - z)%k == 0){
            x++;
        }
    }
    return x;
}

int main() {
    int i;
    int j;
    int k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << endl;
    return 0;
}
