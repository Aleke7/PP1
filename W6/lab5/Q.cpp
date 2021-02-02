#include <bits/stdc++.h>

using namespace std;

int main(){

string s, t;
cin >> s >> t;

if(t.size() % s.size() != 0) {
cout << "NO";
return 0;
}
int cnt = t.size() / s.size();
for(int i = 0;i < cnt;i++) {
int l = i * s.size();
if(t.substr(l, s.size()) != s) {
cout << "NO";
return 0;
}
}
cout << "YES";

return 0;
}