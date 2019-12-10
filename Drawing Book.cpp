//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int x = p/2, y = n/2,z;
    z =y-x;
    if(x<z){

    return x;
    }
    else{
    return z;
    }
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
