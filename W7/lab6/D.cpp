#include <bits/stdc++.h>

using namespace std;

bool checking(int n, int a[], int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x)
        return true;   
    }
    return false;
}

int main(){

int n;
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cin >> a[i];  
}

int x;
cin >> x;

if(checking(n, a, x))
cout << "Yes";
else cout << "No";

return 0;
}