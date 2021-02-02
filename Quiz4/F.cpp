#include <bits/stdc++.h>

using namespace std;

int main(){

string str; 
string a = "", a1 = "";

getline(cin, str);

str += ' ';

for (int i = 0; i < str.size(); i++){
    if(str[i] != ' '){
        a1 += str[i];
    }else{
        if(a1.size() > a.size()){
            a = a1;
        }
        a1 = "";
    }
}
cout << a;

return 0;
}