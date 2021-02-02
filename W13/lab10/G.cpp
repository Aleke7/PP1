#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

map< pair< pair<string, int>, pair<string, int> >, int> mp;
for(int i = 0; i < n; i++){
    string s1, s2;
    int n1, n2;
    cin >> s1 >> n1 >> s2 >> n2;
    mp[make_pair(make_pair(s1, n1), make_pair(s2, n2))] = n1 + n2;
}

map< pair< pair<string, int>, pair<string, int> >, int>::iterator it;
for(it = mp.begin(); it != mp.end(); it++){
    cout << it->first.first.first << " and " << it->first.second.first << " " << it->second << endl;
}

return 0;
}