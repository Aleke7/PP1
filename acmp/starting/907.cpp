#include <bits/stdc++.h>
#define M_PI 3.14

using namespace std;

int main(){

int w, h, r;
cin >> w >> h >> r;

int d = r * 2;
if(d <= w && d <= h)
cout << "YES";
else cout << "NO";

return 0;
}