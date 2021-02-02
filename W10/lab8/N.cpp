#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

set<int> v;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.insert(x);
}

set<int>::iterator it;

for(it = v.begin(); it != v.end(); it++){
    if(*it % 2 == 0){
        continue;
    }
    cout << *it << " ";
}
return 0;
}