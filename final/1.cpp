#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;
string p = "";
for(int i = 0; i < s.size(); i++){
    for(int j = i; j < s.size(); j++){
        p += s[j];
        cout << p << endl;
    }
    p = "";
}

return 0;
}