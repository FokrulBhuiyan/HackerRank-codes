//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>
using namespace std;

// Complete the libraryFine function below.
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fine = 0;
    if(d1 > d2 && m1 == m2 && y1 == y2)
        fine = 15 * (d1-d2);
    else if(m1 > m2 && y1 == y2)
        fine = 500 * (m1-m2);
    else if(y1 > y2)
        fine  = 10000;
    return fine;

}

int main()
{
    int d1,d2,m1,m2,y1,y2;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    int result = libraryFine(d1,m1,y1,d2,m2,y2);
    cout<<result<<endl;
return 0;
}
