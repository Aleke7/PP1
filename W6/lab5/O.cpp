#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;

sort(s.begin(), s.end());
for(int i = 0; i < s.size(); i++){
    cout << s[s.size() - 1];
    return 0;
}

return 0;
}