#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

vector<int> v, v1;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
    v1.push_back(x);
}

int m;
cin >> m;

for(int j = 0; j < m; j++){
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == a)
        v1[i] = b;
    }
}

for(int i = 0; i < v1.size(); i++){
    cout << v1[i] << " ";
}

return 0;
}