#include <bits/stdc++.h>
using namespace std;
int main() {

int n;
cin >> n;

map<string, string> m;
for(int i = 0; i < n; i++){
    string s1, s2;
    cin >> s1 >> s2;
    m[s1] = s2;
    m[s2] = s1;
}

string s;
cin >> s;

cout << m[s];
    
  return 0;
}