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
bool check = false;
for(int i = 1; i < v.size(); i++){
    if(v[i] < 0 && v[i-1] < 0 || v[i] > 0 && v[i-1] > 0){
        check = true;
    }
}

if(!check){
    cout << "NO";
}
else{
    cout << "YES";
}

return 0; 
}