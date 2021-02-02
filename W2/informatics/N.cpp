#include <iostream>

using namespace std;

int main(){

int n, k;
cin >> n;

k = n * 45 + n / 2 * 5 + (n - 1) / 2 * 15;
 cout << 9 + k / 60 << " " << k % 60 << endl;
    return 0;
}