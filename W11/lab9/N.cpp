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

int cnt = 0;

for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        for(int k = 0; k < n; k++){
            if(v[k] == (v[i] ^ v[j])){
                cnt++;
                break;
            }
        }
    }
}

cout << cnt;    

return 0;
}