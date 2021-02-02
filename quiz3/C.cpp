#include <bits/stdc++.h>

using namespace std;

char a[11][11];
int ans = 0;
void f(int i, int j){
    ans++;
    a[i][j] = '#';
    
    if(a[i + 1][j] == '.'){
        f(i + 1, j);
    }
    if(a[i - 1][j] == '.'){
        f(i - 1, j);
    }
    if(a[i][j + 1] == '.'){
        f(i, j + 1);
    }
    if(a[i][j - 1] == '.'){
        f(i, j - 1);
    }
}

int main(){

int n;
cin >> n;

int x, y;
cin >> y >> x;

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
    cin >> a[i][j];
    }
}
f(x, y);
cout << ans;

return 0;
}