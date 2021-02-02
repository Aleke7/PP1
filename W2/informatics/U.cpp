#include <iostream>

using namespace std;

int main(){

unsigned int n, m, d1, d2;

cin >> n >> m;

d1 = n % m;
d2 = m % n;

cout << d1 * d2 + 1 << endl;
return 0;
}