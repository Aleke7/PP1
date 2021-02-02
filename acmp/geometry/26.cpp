#include <bits/stdc++.h>

using namespace std;

int main(){

int x1, y1, r1;
cin >> x1 >> y1 >> r1;
int x2, y2, r2;
cin >> x2 >> y2 >> r2;

double len = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
if(len <= (r1+r2)*(r1+r2) && len + r1 > r2 && len + r2 > r1)
cout << "YES";
else cout << "NO";

return 0;
}