#include <bits/stdc++.h>

using namespace std;

int main(){

int n, c;
cin >> n;

vector<int> v;

for(int i = 0; i < n; i++){
    cin >> c;
    if(c == 1){
        cin >> c;
        v.insert(v.begin(), c);
        }
    else if(c == 2){
        cin >> c;
        v.push_back(c);
        }
    else if(c == 3){
        cout << v[0] << " ";
        v.erase(v.begin());
        }
    else{
        cout << v[v.size() - 1] << " ";
        v.pop_back();
        }
}

return 0;
}