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
int x;
cin >> x;

int k;
for(int i = 1; i < v.size(); i++){
    for(int j = i + 1; j < v.size(); j++){
    if(x < v[i] && x > v[j]){
        k = i+1;
        break;
    }
    if(v[i] == x && v[j] == x){
        k = j + 1;
        break;
    }
    }
}
cout << k + 1;
return 0;
}