#include <iostream>

using namespace std;

int main(){

int a, b, s1, s2;
cin >> a >> b;

s1 = (a / b * a) + (b / a *b);
s2 = a / b + b / a;

cout << s1 / s2 << endl;

return 0;
}