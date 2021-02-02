#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
pair<int, int> m[10000];
cin >> n;
for(int i = 0; i < n; i++){
    cin >> m[i].first >> m[i].second;
}

sort(m, m + n);

for(int i = 0; i < n; i++){
    cout << m[i].first << " " << m[i].second << endl;
}
return 0;
}