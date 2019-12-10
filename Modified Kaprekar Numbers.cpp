//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

bool kaprekar(int i){
    int  sqr = i*i;
    int temp = sqr, count = 0, num = 1;
    while(temp){
        temp = temp/10;
        count++;
    }
    count = count - (count/2);
    while(count){
        num = num*10;
        count--;
    }
    int first = sqr/num;
    int last = sqr %num;
    return first+last==i;
}

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    bool flag = true;
    for(int i = p;i<q;i++){
        if(kaprekar(i)){
            cout<<i<<" ";
            flag = false;
        }
    }
    if(flag){
        cout<<"INVALID RANGE";
    }
}

int main()
{
    int p, q;
    cin >> p>>q;

    kaprekarNumbers(p, q);

    return 0;
}
