#include <iostream>

using namespace std;

int main(){

unsigned int a, b, c;
cin >> a >> b >> c;

if(a % 2 != b % 2 || a % 2 != c % 2 || b % 2 != c % 2)
cout << "YES";
else cout << "NO";

return 0;}