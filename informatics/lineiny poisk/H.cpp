#include <bits/stdc++.h>

using namespace std;

int main(){

int x;
cin >> x;
int n;
cin >> n;

int a[n][n]; 
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> a[i][j];
    }
}
bool check;
int col = 0;
for(int i = 0; i < n; i++){
    check = false; 
    if(a[i][col] == x){ 
        check = true; 
        break; 
    }
    col++;

    
}

if(check)
cout << "YES" << endl;
else cout << "NO" << endl;


return 0;
}