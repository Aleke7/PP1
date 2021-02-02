#include <bits/stdc++.h>

using namespace std;

int f(string s, int i, int ans){
    if(i == s.size())
    return ans;
    int n;
    n += (s[i] - '0') / 2;
    return f(s, i + 1, ans + n);
}
     
int main(){

string s;
cin >> s;
cout << f(s, 0, 0);
return 0;
}