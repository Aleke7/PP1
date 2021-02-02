#include <bits/stdc++.h>

using namespace std;

int main(){

int a, b;
cin >> a >> b;
float a1 = a, b1 = b;
float c = a1 / b1;
cout << "Usual division: " << c << endl;
cout << "Division without remainder: " << a / b << endl;
cout << "Remainder: " << a % b;

return 0;
}