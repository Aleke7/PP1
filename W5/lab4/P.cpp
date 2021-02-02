#include <iostream>

using namespace std;

int main(){

int n, sum = 0;
cin >> n;
int a[n][n];

for(int i = n; i > 0; i--){
    for(int j = 1; j <= n; j++){
        cin >> a[i][j];
        }
}

for(int j = 1; j <= n; j++){
sum += a[j][j];
}        
cout << sum;
return 0;
}