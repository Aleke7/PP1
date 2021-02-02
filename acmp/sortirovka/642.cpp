#include <bits/stdc++.h>

using namespace std;

int main(){

int n, s;
cin >> n >> s;

vector<int> v;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
}

int sum = 0;
sort(v.begin(), v.end());
int cnt = 0;
for(int i = 0; i < v.size(); i++){
    sum += v[i];
    if(sum <= s){
        cnt++;
    }
    else{
        cout << cnt;
        return 0;
    }
    
}

cout << cnt;

return 0;
}