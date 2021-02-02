#include<bits/stdc++.h>

using namespace std;

string generateKey(string s, string key){
    int x = s.size();
    
    for(int i = 0; ; i++){
        if(x == i)
        i = 0;
        
        if(key.size() == s.size())
        break;
        key.push_back(key[i]);
    }
    return key;
}

string cipher(string s, string key){
    string cipher_text;
    
    for (int i = 0; i < s.size(); i++){
        char x = (s[i] + key[i] - 64) % 26;
        x += 'a';
        cipher_text.push_back(x);
    }
    return cipher_text;
}

int main(){

string str, keyword;
cin >> str >> keyword;

string key = generateKey(str, keyword);
string cipher_text = cipher(str, key);

cout << cipher_text;

return 0;
}