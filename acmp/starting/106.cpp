#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}

int cnt0 = 0, cnt1 = 0;
for(int i = 0; i < n; i++){
    if(a[i] == 0)
    cnt0++;
    if(a[i] == 1)
    cnt1++;
}

cout << min(cnt0, cnt1);

return 0;
}