#include <bits/stdc++.h>
 
using namespace std;
 
int main(){

int n;
cin >> n;

vector<int> v;
for(int i = 0; i < n; ++i){
    int x;
    cin >> x;
    v.push_back(x);
}

sort(v.begin(), v.end());

int k = 0;
for(int i = 0; i <= v.size()/2; ++i){
    k += (v[i]/2) + 1;
}

cout << k;

return 0;
}