#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;
long long n = 0;
for(int i = 0; i < s.size(); i++){
    n *= 2;
    n += s[i] - '0';
}

cout << n;

return 0;
}