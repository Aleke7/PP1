#include <bits/stdc++.h>

using namespace std;

int main(){

int n, m, k = 0, e = 0, x, b = n;

cin >> n >> m >> x;

int b = n;

int a[n][n]; 
     
for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
    cin >> a[i][j];
             
    if (a[i][j] == x){
    k++;
}
    if (j == (m - 1) && k > 0){
    e++;
    }
    }
    k = 0;

}
cout << e;
return 0;
}