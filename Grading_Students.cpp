//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int result(int grades){
    // Complete this function
    int g=grades;
    if(g>87 && g<90){
    return 90;
    }
    else if(g>77 && g<80){
    return 80;
    }
    else if(g>67 && g<70){
    return 70;
    }
    else if(g>57 && g<60){
    return 60;
    }
    else if(g>47 && g<50){
    return 80;
    }
    if(g<=40){
        return 33;
    }
}

int main() {
    int n,r;
    int grades[60];
    cin >> n;

    for(int i = 0; i < n; i++){
       cin >> grades[i];
    }
    for (int i = 0; i < n; i++) {
            r = result(grades[i]);
        cout << r << endl;
    }
    cout << endl;


    return 0;
}
