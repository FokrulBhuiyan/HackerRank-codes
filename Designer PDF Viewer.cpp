//===================written By Fokrul Bhuiyan=============

#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    // Complete this function
    int temp = -1;
    int len = word.length();
    for(int i = 0; i < len; i++){
        if(h[word[i]-'a'] > temp){
            temp = h[word[i]-'a'];
        }
    }
    return len*temp;
}


int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}
