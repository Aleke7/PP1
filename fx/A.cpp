#include <bits/stdc++.h>

using namespace std;

int a[150];

int main(){

int n, l, r;
cin >> n >> l >> r;

for(int i = 1; i <= n; i++){
    cin >> a[i];
}

for(int i = l; i <= (l + r) / 2; i++){
    swap(a[i], a[r - i + l]);
}

for(int i = 1; i <= n; i++){
    cout << a[i] << " ";
}

return 0;
}