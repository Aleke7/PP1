#include <bits/stdc++.h>

using namespace std;
/*
apple

a
ap
app
appl
apple
*/
int main(){

string s;
cin >> s;

int n;
n = s.size();
string p = "";
for(int i = 0; i < n; i++){
    p+=s[i];
    cout << p << endl;
}

return 0;
}