//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;


// Complete the squares function below.
int squares(long long int a, long long int b) {
         a=ceil(sqrt(a));
        b=floor(sqrt(b));
        return (((int)(b-a))+1);
}

int main()
{
    int q;
    long long int a,b;
    cin >> q;
    for (int q_itr = 0; q_itr < q; q_itr++) {
        cin>>a>>b;
        int result = squares(a, b);

        cout << result << "\n";
    }

    return 0;
}
