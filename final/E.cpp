#include <bits/stdc++.h>

using namespace std;

int main(){

string s; 
string b[1005];
pair<string, string> t[1005];

int n;
cin >> n;

for(int i = 0; i < n; i++){
        cin >> s;
}

int m;
cin >> m;

for(int i = 0; i < m; i++){
    cin >> t[i].first >> t[i].second;
}

string z;
cin >> z;

int cnt = 0;
for(int i = 0; i < m; i++){
    if(z == t[i].first){
        b[cnt] = t[i].second;
        cnt++;
        }
    if(z == t[i].second){
        b[cnt] = t[i].first;
        cnt++;
        }
}

for(int i = 0; i < cnt; i++){
    for(int j = 0; j < cnt - 1; j++){
        if(b[j] > b[j + 1])
        swap(b[j], b[j + 1]);
    }
}

cout << cnt << endl;

for(int i = 0; i < cnt; i++){
    cout << b[i] << " ";
}

return 0;
}