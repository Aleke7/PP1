#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

vector<int> v;
set<int> s;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    s.insert(x);
    if(v.size() != s.size()){
        v.push_back(x);
    }
}


do{
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}while(next_permutation(v.begin(), v.end()));

return 0;
}