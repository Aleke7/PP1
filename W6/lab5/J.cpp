#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;
string t = s;
string a = s;

reverse(a.begin(), a.end());
if(a == s)
cout << "YES";
else{
reverse(t.begin() + 1, t.end());
if(t == s)
cout << "YES";
else cout << "NO";
}
return 0;
}