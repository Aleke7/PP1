#include <iostream>

using namespace std;

int main(){

int n, m, res, drop = 10000, cnt = 0;
cin >> n >> m;
int a[n][m];

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cin >> a[i][j];
    }
}

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++)
        cnt += a[i][j];
        if(cnt < drop){
            drop = cnt;
            res = i;
        }
        cnt = 0;  
    
    
}
cout << ++res;
return 0;
}