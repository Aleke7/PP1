#include <bits/stdc++.h>

using namespace std;

int main(){

int a, b, c, d;
cin >> a >> b >> c >> d;

if(abs(b-a) == abs(d-c))
cout << "Won";
else cout << "Lose";

return 0;
}