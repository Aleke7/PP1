#include <bits/stdc++.h>

using namespace std;

int a[15];

bool f(int n){
    for(int i = 0; i <= 9; i++){
        a[i] = 0;
    }

    while(n > 0){
        a[n % 10]++;
        if(a[n % 10] > 1){
            return 0;
        }
        n /= 10;
    }

    return 1;
}

int main(){

int n;
cin >> n;

for(int i = n + 1; i < 10000; i++){
    if(f(i) == 1){
        cout << i;
        break;
        }
    }

return 0;
}