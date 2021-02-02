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

int sum = 0;
for(int i = 0; i < v.size(); i++){
    if(v[i] > 0){
        sum += v[i];
    }
}

int mx = -999;
int mn = 999;
int posmx, posmn;
for(int i = 0; i < v.size(); i++){
    if(mx < v[i]){
        mx = v[i];
        posmx = i;
    }
    if(mn > v[i]){
        mn = v[i];
        posmn = i;
    }
}

int mltp = 1;
if(posmx > posmn){
    for(int i = posmn + 1; i < posmx; i++){
        mltp *= v[i];
    }
}
else{
    for(int i = posmx + 1; i < posmn; i++){
        mltp *= v[i];
    }
}

cout << sum << " " << mltp;

return 0;
}