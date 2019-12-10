//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int count = 0,i = n;
    while (i>0){
        int rem = i%10;
        if(rem == 0){
            i = i/10;
            continue;
        }
        if(n%rem==0){
            count++;
        }
        i = i/10;
    }
    return count;

}

int main()
{

    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        int result = findDigits(n);

        cout << result << "\n";
    }
    return 0;
}
