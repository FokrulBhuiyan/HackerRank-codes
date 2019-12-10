//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector <int> a,int n) {
    // Complete this function
    int x = 0;
    for(int i = 0 ;i<n;i++){
        if(a[i]<=0){
            x++;
        }
    }
    if(x<k){
        return "YES";
    }
    else{
        return "NO";
    }

}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = angryProfessor(k, a, n);
        cout << result << endl;
    }
    return 0;
}
