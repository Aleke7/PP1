#include <iostream>

using namespace std;

int main(){

int n, x, cnt = 0;
cin >> n;

for(int i = 1; i <= n; i++){
    cin >> x;
    if(x == 0)
    cnt++;
}
cout << cnt;
return 0;
}