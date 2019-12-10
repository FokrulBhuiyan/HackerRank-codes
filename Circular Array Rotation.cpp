//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

vector <int> circularArrayRotation(vector <int> a, int n, int k,int q) {
    // Complete this function
    vector <int> m(q);
    k = k%n;
	for(int i = 0; i < q; i++) {
		int b;
		cin>>b;
		m[i] =  a[(n-k+b)%n];
	}
	return m;
}

int main() {
	int n, k, q;
	cin>>n>>k>>q;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }

    vector <int> result = circularArrayRotation(a, n, k, q);
    for(int i = 0;i<q;i++){
        cout<<result[i]<<" ";
    }

    return 0;
}

