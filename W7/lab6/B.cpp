#include <bits/stdc++.h>

using namespace std;
int a[10001], b[10001], d[100001];

void difference(int a[], int b[], int d[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        d[i] = abs(a[i] - b[i]);
        cout << d[i] << " ";
    }
    return;
}


int main(){

int n;
scanf("%d", &n);
difference(a, b, d, n);

return 0;
}