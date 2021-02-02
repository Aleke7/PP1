#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

int a[n];
for(int i = 1; i <= n; i++){
    cin >> a[i];
}

bool check = true;
int k;
for(int i = 1; i <= n; i++){
    if(a[i] <= 437){
        check = false;
        k = i;
        break;
    }
}

if(check){
    cout << "No crash";
}
else{
    cout << "Crash " << k;
}


return 0;
}