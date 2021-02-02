#include <iostream>

using namespace std;

int main(){

int a, b, n;
cin >> a;
cin >> b;
cin >> n;

if(b * n >= 100)
cout << (a * n) + (b * n / 100) << " " << (b * n) % 100 << endl;
else
cout << a * n << " " << b * n << endl;


    return 0;
}