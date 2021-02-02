#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
map<int, int> mp;

while(cin >> n){
    mp[n]++;
    if(n == 0){
        break;
    }
}

cout << mp[1] << " " << mp[2] << " " << mp[3] << " " << mp[4] << " " << mp[5] << " " << mp[6] << " " << mp[7] << " " << mp[8] << " " << mp[9];

return 0;
}