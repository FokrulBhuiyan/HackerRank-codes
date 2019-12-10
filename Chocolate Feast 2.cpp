//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, c, m;
	cin >> t;
  	while (t--) {
        cin >> n >> c >> m;
        int x = n / c;
        int p = x;
        while (p >= m) {
            p = p - m;

            x++;
            p++;
        }

        cout << x << endl;
    }
}
