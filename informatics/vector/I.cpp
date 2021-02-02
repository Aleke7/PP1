#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n <= 1){
    return false;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
        return false;
    }

    return true;
}

int main(){

int m, n;
cin >> m >> n;

int cnt = 0;
for(int i = m; i <= n; i++){
    if(isPrime(i)){
    cout << i << endl;
    cnt++;
    }
}

if(cnt == 0)
cout << "Absent";

return 0;
}