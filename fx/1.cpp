#include <bits/stdc++.h>

using namespace std;

int main(){

map<int, int> cnt;

int n;
int mx = 0;
while(cin >> n){
    cnt[n]++;
    if(n > mx){
        mx = n;
    }
    if(n == 0){
        break;
    }
    
}

map<int, int>::iterator it;

for(it = cnt.begin(); it != cnt.end(); it++){
    if(it->second == 1){
        cout << it->first;
        break;
    }
}

return 0;
}