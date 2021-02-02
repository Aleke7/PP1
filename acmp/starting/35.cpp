#include <bits/stdc++.h>

using namespace std;

int main(){

int k;
cin >> k;
int n, m, d;

for(int i = 0; i < k; i++){
    cin >> n >> m;
    d = 19 * m + (n + 239) * (n + 366) / 2;
    cout << d << endl;
}

return 0;
}