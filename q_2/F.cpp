#include <bits/stdc++.h>

using namespace std;

int main(){

vector<int> v1;
vector<int> v2;
int n, m;
cin >> n;
for(int i = 0 ; i < n; i++){
    int x = 0;
    cin >> x;
    v1.push_back(x);
}
cin >> m;
for(int j = 0 ; j < m; j++){
    int y = 0;
    cin >>y;
    v2.push_back(y);
}

for(int i = 0; i < v1.size(); i++){
    for(int j = i + 1; j < v1.size(); j++)
    for(int k = 0; k < v2.size(); k++)
    if(v1[i] + v1[j] == v2[k]){
        cout << "YES";
    }
    else cout << "NO";
    
}

return 0;
}