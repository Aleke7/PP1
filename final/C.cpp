#include <bits/stdc++.h>

using namespace std;

int a[100005];

int main(){

int n;
cin >> n;

for(int i = 0; i < n; i++){
    cin >> a[i];
}

int cnt = 1;
for(int i = 1; i < n; i++){
    if(a[i] < a[i - 1])
    cnt++;
}

cout << cnt;

return 0;
}