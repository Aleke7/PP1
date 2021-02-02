#include <bits/stdc++.h>

using namespace std;

int main(){

map<string, string> mp;
int n;
cin >> n;
for(int i = 0; i < n; i++){
    string login;
    string password;
    cin >> login >> password;
    mp[login] = password;
}

int m;
cin >> m;

for(int i = 0; i < m ; i++){
    string login;
    string password;
    cin >> login >> password;

    if(!mp.count(login)){
        cout << "login error" << endl;
    }
    else if(mp[login] != password){
        cout << "password error" << endl;
    }
    else cout << "correct password" << endl;
}

return 0;
}