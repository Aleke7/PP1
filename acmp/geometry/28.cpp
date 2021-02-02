#include <bits/stdc++.h>

using namespace std;

int main(){

int x1, y1, x2, y2;
cin >> x1 >> y1 >> x2 >> y2;
int xa, ya, xb, yb;
cin >> xa >> ya;

if(x1 == x2){
    xb = 2 * x1 - xa;
    yb = ya;
}

if(y1 == y2){
    xb = xa;
    yb = 2 * y1 - ya;
}

cout << xb << " " << yb;

return 0;
}