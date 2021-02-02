#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;
map<char, int> m;
for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
        m[s[i]]++;
    }
    if(s[i] >= 'A' && s[i] <= 'Z'){
        m[s[i]]++;
    }
    if(s[i] >= '0' && s[i] <= '9'){
        m[s[i]]++;
    }
}

map<char, int>::iterator it;
for(it = m.begin(); it != m.end(); it++){
    cout << it->first << " => " << it->second << endl;
}

return 0;
}