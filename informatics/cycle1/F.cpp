#include <iostream>

using namespace std;

int main(){

int x, digit, inverse = 0;
cin >> x;

while(x > 0){
  digit = x % 10;
  x /= 10;
  inverse *= 10;
  inverse += digit; 
}
cout << inverse;
return 0;
}