#include <bits/stdc++.h>

using namespace std;

int pol[150][150];
int cnt[150];

int main(){

int n, m;
cin >> n >> m;

int ans, mx = 0;
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cin >> pol[i][j];
        if(pol[i][j] > 0){
            cnt[i]++;
        }
    }
    
    if(cnt[i] > mx){
        mx = cnt[i];
        ans = i;
    }
}

int tmp = 0;
for(int i = 0; i < n; i++){
    if(cnt[i] == mx){
        tmp++;
    }
}

if(tmp == n){
    cout << "Numbers are equal";
}else{
    cout << ans + 1;
}

return 0;
}