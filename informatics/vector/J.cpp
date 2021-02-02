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
int min = 999;
for(int i = 0; i < v.size(); i++){
    for(int j = i + 1; j < v.size(); j++){
        if(v[i] + v[j] < 5 && v[i] + v[j] < min){
            min = v[i] + v[j];
        }
    }
}
int k, k1;
for(int i = 1; i <= v.size(); i++){
    for(int j = i + 1; j <= v.size(); j++){
        if(v[i] < 5 && v[j] < 5){
        k = i;
        k1 = j;
        }
    }
}

cout << k << " " << k1 << " " << 10 - min;

return 0;
}