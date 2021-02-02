#include <bits/stdc++.h.>

using namespace std;


int main(){

vector<int> a;
vector<int> b;
vector<int> ab;
int n, m;
cin >> n;

for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    a.push_back(x);
}

cin >> m;
for(int j = 0; j < m; j++){
    int y;
    cin >> y;
    b.push_back(y);
}

ab.reserve(a.size() + b.size());
ab.insert(ab.end(), a.begin(), a.end());
ab.insert(ab.end(), b.begin(), b.end());
sort(ab.begin(), ab.end());
for(int k = 0; k < ab.size(); k++){
    cout << ab[k] << " ";
}


return 0;
}