//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;


int main() {
    int h,m;
    string num[30] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
    cin >>h>>m;
    
	if(m==0){
    	cout<<num[h-1]<<" o' clock"<<endl;
	}
	else if(m==15){
		cout<<"quarter past "<<num[h-1]<<endl;
	}
	else if(m==30){
		cout<<"half past "<<num[h-1]<<endl;
	}
	else if(m<30){
		cout<<num[m-1]<<" minutes past "<<num[h-1]<<endl;
	}
	else if(m==45){
		cout<<"quarter to "<<num[h]<<endl;
	}
	else{
		cout<<num[60-m-1]<<" minutes to "<<num[h]<<endl;
	}

    return 0;
}
