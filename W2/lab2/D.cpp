#include <iostream>

using namespace std;

int main(){

int n, k;
cin >> n >> k;
    if (n <= k) {
        cout << 2 << endl;
    }else if ((n*2) % k == 0) {
        cout << n * 2 / k << endl;
    }else{
        cout << n* 2 / k + 1 << endl;
    }

    return 0;
}