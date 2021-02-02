#include <iostream>

using namespace std;

int main(){

int n, max = -999999, row, col;
cin >> n;
int a[n][n];

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        cin >> a[i][j];
    }    
}

for(int i = 1; i <= n; i++){
    if(max < a[i][i]){
        max = a[i][i];
        row = i;
        col = i;
        }
}
cout << "Maximum element is: " << max << " with coordinates: " << row << ";" << col;

return 0;
}