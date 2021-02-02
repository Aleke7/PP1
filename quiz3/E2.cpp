#include <bits/stdc++.h>

using namespace std;

void primefactorization(int n){
    int i = 2;
    while(i < n){
        if ( n % i == 0 ){
            cout << i << " ";
            n = n / i;
        }else{
          i += 1;
        }

    } 
    if ( n > 1 ){
    cout << n;
    }
}

int main(){

int n;
cin >> n;
  
primefactorization(n);

return 0;
}