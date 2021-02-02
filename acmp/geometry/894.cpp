#include <bits/stdc++.h>

using namespace std;

int main(){

double S, r1, r2;
cin >> S >> r1;

const double PI = 3.141592653589793;
double s1 = PI*r1*r1;
double s2 = s1 - S;

r2 = sqrt(s2/PI);
cout << fixed << setprecision(3) << r2;

return 0;
}