
//===================written By Fokrul Bhuiyan=============

#include<iostream>

using namespace std;

int breakingRecords(int *score,int n) {
    // Complete this function
    int counth = 0, h[n];
    h[0]=score[0];
    for(int i = 0; i<n-1;i++){
    if(h[i]<score[i+1]){
        h[i+1]=score[i+1];
        counth++;
    }
    else{
        h[i+1]=h[i];
    }
    }
    return counth;
}

int breakingRecords2(int *score,int n) {
    // Complete this function
    int counth = 0, l[n];
    l[0] = score[0];
    for(int i = 0; i<n-1;i++){
    if(l[i]>score[i+1]){
        l[i+1]=score[i+1];
        counth++;
    }
    else{
        l[i+1]=l[i];
    }
    }
    return counth;
}

int main() {
    int n;
    cin >> n;
    int score[n];
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    int resulta = breakingRecords(score,n);
    int resultb = breakingRecords2(score,n);

    cout<<resulta<<" "<<resultb;

    return 0;
}
