#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

vector<int> v;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
}

sort(v.begin(), v.end());
reverse(v.begin(), v.end());

long long mltp = 1;
mltp *= v[0] * v[1] * v[2];

cout << mltp;

return 0;
}