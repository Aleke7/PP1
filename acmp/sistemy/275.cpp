#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;
string s;

for(int i = 0; i < n; i++){
    cin >> s;
    long long num = 0;
    for(int i = 0; i < s.size(); i++){
        num *= 2;
        num += s[i] - '0';
        num %= 7;
    }
    if(!num){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

return 0;
}