#include <bits/stdc++.h>

using namespace std;

void primefactor(int n, int i){
    if(i >= n){
        cout << n << " ";
        return;
    }
    if(n % i == 0){
        cout << i << " ";
        primefactor(n / i, i);
    }else{
        primefactor(n, i + 1);
    }
}

int main(){

int n, i = 2;
cin >> n;

primefactor(n, i);

return 0;
}