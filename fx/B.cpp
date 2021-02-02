#include <bits/stdc++.h>

using namespace std;

int cnt[10];

int main(){

int n = 10;

while(n != 0){
    cnt[n]++;
    cin >> n;
}

for(int i = 1; i < 10; i++){
    cout << cnt[i] << " ";
}

return 0;
}
// 2 1 3 1 2 0