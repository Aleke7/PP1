#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

map<string, double> mp;
int total = 0;

for(int i = 0; i < n; i++){
    int m;
    cin >> m;
    for(int j = 0; j < m; j++){
        string s;
        int x;
        cin >> s >> x;
        mp[s] += x;
        total += x;
    }
}

map<string, double>::iterator it;
for(it = mp.begin(); it != mp.end(); it++){
    it->second = it->second/total * 100;
    cout << it->first << " " << it->second << endl;
}

return 0;
}