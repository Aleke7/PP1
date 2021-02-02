#include <bits/stdc++.h>

using namespace std;

void TurnLowerToCapital(string s){
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            s[i] -= 32;
        }
        cout << s[i];
    }
}

int main(){

string s;
cin >> s;
TurnLowerToCapital(s);
return 0;
}