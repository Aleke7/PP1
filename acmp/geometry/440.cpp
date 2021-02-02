#include <bits/stdc++.h>

using namespace std;

int main(){

int x, y;
int x0[5] = {0, 25, 50, 75, 100};
int r = 10;
int cnt = 0;
bool a[5] = {false};

for(int i = 0; i < 5; i++){
    cin >> x >> y;
    for(int i = 0; i < 5; i++){
    if((x - x0[i])*(x - x0[i]) + y*y <= r*r){
        a[i] = true;
        break;
    }
    }
}

cout << count(a, a + 5, true);

return 0;
}