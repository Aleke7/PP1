#include <bits/stdc++.h>

using namespace std;


int main(){

int n;
cin >> n;
int a[n];

for(int i = 1; i <= n; i++){
    cin >> a[i];    
}
reverse(a[1], a[n]);
for(int i = 1; i <= n; i++){
    cout << a[i] << " ";    
}
return 0;
}