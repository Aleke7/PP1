#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
string t;
string p = "";

cin >> s >> t;

if(s == t){
    cout << 0;
    return 0;
}

for(int i = 1; i <= s.size(); i++){
    p += s.substr(s.size() - i, i) + s.substr(0, s.size() - i);
    if(p == t){
        cout << i;
        return 0;
        }
    p = "";
}

cout << "Understandable have a nice day";

return 0;
}