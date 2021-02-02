#include <iostream>

using namespace std;

int main(){

int n, power = 1;

cin >> n;

while(power <= n){
    cout << power << " ";
    power *= 2;
}
    return 0;
}