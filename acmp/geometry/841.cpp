#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

if(n > 0)
cout << n*(n-1) + 2;

if(n == 0)
cout << 1;

return 0;
}