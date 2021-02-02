#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cin >> a[i];
}
int  mx = -999999;
int  mn = 999999;
for(int i = 0; i < n; i++){
mx = max(mx, a[i]);
mn = min(mn, a[i]);
}
for(int i = 0; i < n; i++){
    if(a[i] == mx)
    a[i] = mn;
    cout << a[i] << " ";
}

    return 0;
}