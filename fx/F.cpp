#include <bits/stdc++.h>

using namespace std;

bool validation1(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            return true;
        }
    }
    return false;
}

bool validation2(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[0] == '@' && s[i] >= 'a' && s[i] <= 'z'){
            return true;
        }
    }
    return false;
}

bool validation3(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[0] == '.' && s[i] >= 'a' && s[i] <= 'z'){
            return true;
        }
    }
    return false;
}

int main(){

string str;
getline(cin, str);

string a1 = "", a2= "", a3 = "";
for(int i = 0; i < str.size(); i++){
    if(str[i] != '@'){
        a1 += str[i];
    }
    str.erase(0, str.find('@'));
    if(str[i] != '.'){
        a2 += str[i];
    }
    str.erase(str.find('@'), str.find('.'));
    a3 += str[i];
}

if(validation1(a1) && validation2(a2) && validation3(a3)){
    cout << "Yes";
}else{
    cout << "No";
}

return 0;
}