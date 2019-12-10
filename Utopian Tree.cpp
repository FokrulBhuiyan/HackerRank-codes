//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n) {
    // Complete this function
    int h = 1;
    for(int i = 1; i <= n; i++){
        if(i%2 != 0)
            h = h*2;
        if(i%2==0)
            h++;
    }
    return h;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << endl;
    }
    return 0;
}
