#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;
int a[n][n];

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> a[i][j];
    }
}
int max = -999999;
int second = -999999;

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(max < a[i][j]){
            second = max;
            max = a[i][j];
        }else if(second < a[i][j] && a[i][j] != max)
        second = a[i][j];
    }
}
if(second == -999999)
cout << 0;
else cout << second;
return 0;
}