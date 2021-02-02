#include <bits/stdc++.h>

using namespace std;

int main(){

int k;
cin >> k;

if(k % 3 == 1){
    cout << "VGC";
}
if(k % 3 == 2){
    cout << "CVG";
}
if(k % 3 == 0){
    cout << "GCV";
}

return 0;
}