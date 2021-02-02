#include <bits/stdc++.h>

using namespace std;

int cnt[1123];
int a[1123];

int main(){

int test;
cin >> test;

while(test--){
    int n, k;
    int mn = 1123;
    bool b = false;
    
    cin >> n;
    for(int i = 0; i <= 1000; i++){
        cnt[i] = 0;
        a[i] = 0;
    }
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    
    for(int i = 0; i < n; i++){
        if(cnt[a[i]] == 1 && a[i] < mn){
            mn = a[i];
            k = i;
            b = true;
            }
    }
    
    if(!b){
    cout << "ZA WARUDO" << endl;
    }
    else cout << k + 1 << endl;
}

return 0;
}