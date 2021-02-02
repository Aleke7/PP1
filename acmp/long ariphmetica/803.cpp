#include <bits/stdc++.h>

using namespace std;

int main(){

int a, b, k;
cin >> a >> b >> k;

int i = 0;
while(i < k){
    a = 10*(a % b);
    i++;
}

cout << a / b;

return 0;
}