#include <bits/stdc++.h>

using namespace std;

void f(vector<int> v, int k){
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == k)
        cnt++;
    }
    if(cnt > 0)
    cout << "Yes";
    else cout << "No";

}

int main(){

int n;
cin >> n;

vector<int> v;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
}

int k; 
cin >> k;

f(v, k);

return 0;
}