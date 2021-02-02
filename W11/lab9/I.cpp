#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

map<string, int> m;
for(int i = 0; i < n; i++){
    string x;
    cin >> x;
    if(m[x] == 1){
        cout << "user already exists" << endl;
    }
    else cout << "new user added" << endl;
    m[x] = 1;
}

return 0;
}
