//===================written By Fokrul Bhuiyan=============

#include<iostream>
using namespace std;


int main(){
    int arr[100];
    float x=0,y=0,z=0;
    int n;
    cin >> n;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < n;arr_i++){
       if(arr[arr_i] > 0){
           x = x + 1;
       }
       else if(arr[arr_i] < 0){
           y = y + 1;
       }
       else{
           z = z + 1;
       }
    }
    cout<<x/n<<endl;
    cout<<y/n<<endl;
    cout<<z/n<<endl;

}
