#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;
int max = 0;
int k;
bool check = false;
for(int i = 1; i <= n; i++){
    int v, s;
    cin >> v >> s;
    if(s == 1 && v > max){
        max = v;
        k = i;
        check = true;
    }
}

if(check)
cout << k;
else cout << -1;

return 0;
}