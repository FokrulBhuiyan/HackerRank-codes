//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>
#include<string>

using namespace std;
int main(){


    int hh, mm, sec ;
    string c;
    cout<< "Enter Hour:min:sec PM/AM ";
    cin>> hh>>mm;
    cin>>sec;
    //cout<<endl;
    cin>>c;
    if (c == "PM" && hh<=12){ hh = hh + 12 ;}
    if(hh==24){
        hh=0;
    }
    cout<<hh<<":"<<mm<<":" ;
    cout<<sec;
    return 0;
}
