#include <bits/stdc++.h>

using namespace std;

void withoutvowel(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u')
        continue;
        cout << s[i];
    }
    
}

int main(){

string s;
getline(cin, s);
withoutvowel(s);

return 0;
}