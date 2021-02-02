#include <iostream>

using namespace std;

int main(){

int x;
long long sum = 0;

for(int i = 1; i <= 100; i++){
    cin >> x;
    sum += x;
}
cout << sum;
return 0;
}