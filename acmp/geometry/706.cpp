#include <bits/stdc++.h>

using namespace std;

int main(){

double x, y, r;
cin >> r >> x >> y;

double res = abs(x/(2-y/r));
cout << fixed << setprecision(2) << res;

return 0;
}