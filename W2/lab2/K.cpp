#include <iostream>

using namespace std;

int main(){

int n, a = 1;

cin >> n;

while(a * a <= n){
    cout << a * a << endl;
    a += 1;
}

    return 0;
}