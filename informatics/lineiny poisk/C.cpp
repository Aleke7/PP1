#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}

int x;
cin >> x;
int min;
sort(a, a + n);
for(int i = 0; i < n; i++){
    min = abs(a[0] - x);
}
int k;
for(int i = 1; i < n; i++){
    if(abs(a[i] - x) < min){
        min = abs(a[i] - x);
        k = i;
    }
}

cout << a[k];

return 0;
}