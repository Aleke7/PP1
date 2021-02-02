#include <bits/stdc++.h>

using namespace std;

int f(string s, int i, int mx){
    if(i == s.size())
    return mx;
    int digit;
    digit += s[i] - '0';
    mx = max(mx, digit);
    return f(s, i + 1, mx);
}

int main(){

string s;
cin >> s;

cout << f(s, 0, 0);

return 0;
}