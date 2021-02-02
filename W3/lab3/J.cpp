#include <iostream>

using namespace std;

int main(){

int n, m;
cin >> n >> m;
int a[n];

for(int i = 1; i <= n; i++){
    cin >> a[i];
}
int index;
for(int i = 1; i <= n; i++){
    if(a[i] <= m){
        index = i;
    }
}
    cout << index;
    return 0;
}