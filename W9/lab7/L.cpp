#include <bits/stdc++.h>

using namespace std;

string f(string s, int i, int j){
    if(s[i] == s[j])
    return "Yes";
    if(s[i] != s[j])
    return "No";

    return f(s, i + 1, j - 1); 
}


int main(){

string s;
cin >> s;
int i = 0;
int j = s.size() - 1;

cout << f(s, i, j);
return 0;
}