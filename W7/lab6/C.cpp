#include <bits/stdc++.h>

using namespace std;

void common(int a[], int b[], int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
        if(a[i] == b[j]){
        cnt++;
        b[j] = 0;
        }
    }
    cout << cnt;

}

int main(){

int n;
cin >> n;
int a[n], b[n];
for(int i = 0; i < n; i++){
        cin >> a[i];
}
for(int j = 0; j < n; j++){
        cin >> b[j];
}

common(a, b , n);

return 0;
}