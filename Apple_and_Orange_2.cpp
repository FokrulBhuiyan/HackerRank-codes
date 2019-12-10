//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;
int main(){
    int orange_count=0,apple_count=0;
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
    for(int apple_i = 0; apple_i < m ; apple_i++){
       cin >> apple[apple_i];
        if(a+apple[apple_i]>=s && a+apple[apple_i]<=t){
            apple_count++;
        }
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n ; orange_i++){
       cin >> orange[orange_i];
        if(b+orange[orange_i]>=s && b+orange[orange_i]<=t){
            orange_count++;
        }
    }



    cout<<apple_count<<endl<<orange_count<<endl;
    return 0;
}
