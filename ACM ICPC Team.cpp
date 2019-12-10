//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    string arr[1000];
    for(int i = 0; i < n; i++){
       cin>>arr[i];
    }

    int top = 0;
    int topteam = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = 0;
            for (int k = 0; k < m; k++)
            {
                if(arr[i][k] == '1' || arr[j][k] == '1')
                    temp++;
            }
            if (temp > top) {
                top = temp;
                topteam = 1;
            }
            else if (temp == top) {
                topteam ++;
            }
        }
    }
    cout<<top<<endl<<topteam;
    return 0;
}
