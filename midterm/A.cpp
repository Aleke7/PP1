#include <bits/stdc++.h>

using namespace std;

int main(){

int x, min, n, max; 

cin >> x >> min;

max = min;

for (int i = 0; i < x - 1; i++){
    cin >> n;
    if (n < min) 
    min = n;
    if (n > max) 
    max = n;
}

cout << max - min + 1 - x;
return 0;
}