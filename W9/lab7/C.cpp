#include <bits/stdc++.h>

using namespace std;

string find(int l, int r, int a[], int x){
    if(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x)
        return "Yes";
        if(a[m] < x)
        return find(m + 1, r, a, x);
        return find(l, m - 1, a, x);
        }
    return "No";
}
     
int main(){
    
int n;
cin >> n;
int a[n];

for(int i = 1; i <= n; i++){
    cin >> a[i];
}
int x;
cin >> x;
cout << find(1, n, a, x);

return 0;
}