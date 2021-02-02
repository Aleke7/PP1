#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;

if(s[0] == 'x'){
    if(s[1] == '+'){
        cout << (s[4] - '0') - (s[2] - '0');
        return 0;
    }
    if(s[1] == '-'){
        cout << (s[4] - '0') + (s[2] - '0');
        return 0;
    }
}

if(s[2] == 'x'){
    if(s[1] == '+'){
        cout << (s[4] - '0') - (s[0] - '0');
        return 0;
    }
    if(s[1] == '-'){
        cout << (s[0] - '0') - (s[4] - '0');
        return 0;
    }
}

if(s[4] == 'x'){
    if(s[1] == '+'){
        cout << (s[0] - '0') + (s[2] - '0');
        return 0;
    }
    if(s[1] == '-'){
        cout << (s[0] - '0') - (s[2] - '0');
        return 0;
    }
}

return 0;
}