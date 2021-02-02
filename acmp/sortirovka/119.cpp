#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;
int h, m, s;
vector<int> v;
for(int i = 0; i < n; i++){
    cin >> h >> m >> s;
    int x;
    x = h * 3600 + m * 60 + s;
    v.push_back(x);
}

sort(v.begin(), v.end());

for(int i = 0; i < v.size(); i++){
    h = v[i] / 3600;
    m = (v[i] / 60) % 60;
    s = v[i] % 60;
    cout << h << " " << m << " " << s << endl;
}

return 0;
}