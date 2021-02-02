#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
vector<int> v;

while(cin >> n){
    v.push_back(n);
    if(n == 0)
    break;
}

sort(v.begin(), v.end());

int cnt = 0;
for(int i = 0; i < v.size(); i++){
    if(v[v.size() - 1] == v[i])
    cnt++;
}
cnt = cnt - 1;
cout << cnt;

return 0;
}