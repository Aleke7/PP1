#include <bits/stdc++.h>

using namespace std;

int main(){

string s = "qwertyuiopasdfghjklzxcvbnm";
char a;
cin >> a;

for(int i = 0; i < s.size(); i++){
    if(a == s[i] && a != 'm'){
    cout << s[i+1];
    break;
    }
    if(a == 'm'){
    cout << 'q';
    break;
    }
}

return 0;
}