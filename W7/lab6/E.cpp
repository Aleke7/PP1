#include <bits/stdc++.h>

using namespace std;

void Hypotenuse(int a, int b){
    double c = sqrt(a * a + b * b);
    cout << setprecision(4);
    cout << c;
}

int main(){

int a, b;
cin >> a >> b;

Hypotenuse(a, b);

return 0;
}