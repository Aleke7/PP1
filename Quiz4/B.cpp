#include <bits/stdc++.h>

using namespace std;

string encryption(string s){
    string p = "";
    int n = s.size();
    char dif;

    for(int i = 0; i < n; i++){
    dif = s[i] - 'a';
    p += 'z' - dif;
    }

    return p;
}

int main(){

string encrypt; 
cin >> encrypt;

cout << encryption(encrypt);

return 0;
}