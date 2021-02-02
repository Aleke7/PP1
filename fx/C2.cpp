#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

int i = 100;
while(i < 1000){
    if((i / 100) + ((i / 10) % 10) + (i % 10) == n){
        cout << i << endl;
    }
    i++;
}

return 0;
}