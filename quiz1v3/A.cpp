#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main(){

for(int i = 0; i < 1000; i++){
    cin >> a[i];
    if(a[i] == 0)
    break;
}
int cnt = 0;
for(int i = 1; i < 1000; i++){
    if(a[i] > a[i-1])
    cnt++;
}

cout << cnt;

return 0;
}