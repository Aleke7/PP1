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
for(int i = 1; i < v.size(); i++){
    if(v[i-1] + 1 == v[i]){
        continue;
    }
    else{
        cnt++;
    }
}

cout << cnt;

return 0;
}