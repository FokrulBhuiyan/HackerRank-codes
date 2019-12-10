//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    for(int i=0;i<=v1;i=i+3){
        x1=x1+i;

    }
    for(int j=0;j<=v2;j=j+2){
        x2=x2+j;

    }
            if(x1==v1 || x2==v2){
            return "yes";
        }
        else{
            return "no";
        }

}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
