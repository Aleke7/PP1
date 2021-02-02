#include <bits/stdc++.h>

using namespace std;

void scan(string s){
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            
            cout << s[i];

            return;
        }
        else{
            cout << -1;
            return;
        }

    }
   
}


int main(){

string s;
getline(cin, s);
scan(s);
return 0;
}