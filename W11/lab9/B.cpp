#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;
vector<int> v;
vector<int> f;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if(x % 2 == 0){
        v.push_back(x);
    }
    else f.push_back(x);
}

sort(v.begin(), v.end());
sort(f.begin(), f.end());

for(int i = v.size() - 1; i >= 0; i--){
    cout << v[i] << " ";
}

for(int i = 0; i < f.size(); i++){
    cout << f[i] << " ";
}
return 0;
}