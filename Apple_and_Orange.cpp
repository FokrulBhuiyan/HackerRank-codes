//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b,int m, int n, vector <int> apple, vector <int> orange) {
    int x,y;
    for(int i = 0; i < m; i++){
       x = a+apple[i];
        if(s<=x && x<=t){
            cout<< 1<<endl ;
        }
    }
    for(int j = 0; j < n; j++){
       y = b+orange[j];
        if(s<=y && y<=t){
            cout<< 1 <<endl;
        }
}
}

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange[orange_i];
    }
    countApplesAndOranges(s, t, a, b, m, n, apple, orange);
    return 0;
}
