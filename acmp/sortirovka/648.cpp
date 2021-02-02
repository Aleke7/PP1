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

int sum1 = 0, sum2 = 0;

for(int i = 0; i < n/2; i++){
    sum1 += v[i];
}

for(int i = n/2; i < n; i++){
    sum2 += v[i];
}

cout << sum2 - sum1;

return 0;
}