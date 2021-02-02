#include <iostream>

using namespace std;

int main(){

int n, d1, d2, d3, d4, s1, s2;
cin >> n;

d1 = n / 1000;
d2 = n % 1000 / 100;
d3 = n % 100 / 10;
d4 = n % 10;

s1 = d1 * 10 + d2;
s2 = d4 * 10 + d3;

cout << s1 - s2 + 1 << endl;


    return 0;
}