#include <bits/stdc++.h>

using namespace std;

void findpos(string s, string t){
    int n = s.size(); 
    int m = t.size();
    bool flag;
    
    for(int i = 0; i < n; i++){
        if(s[i] == t[0]){
            flag = true;
        for(int j = 1; j < m; j++){
        if(s[i + j] != t[j]){
            flag = false;
            }
        }
        if(flag == true){
            cout << i << " ";
            }
        }
    }
}

int main(){

string s, t;
cin >> s >> t;

findpos(s, t);

return 0;
}