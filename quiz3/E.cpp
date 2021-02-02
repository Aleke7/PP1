#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

set<int> s;
int x;
for(int i = 1; i <= n; i++){
    cin >> x;
    s.insert(x);
}

if(s.size() == n){
    cout << "YES";
}else{
    cout << "NO";
}
return 0;
}