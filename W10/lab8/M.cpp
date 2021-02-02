#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

set<int> v;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.insert(x);
}

int sum = 0;

set<int>::iterator it;

for(it = v.begin(); it != v.end(); it++){
    sum += *it;
}

cout << sum;
return 0;
}