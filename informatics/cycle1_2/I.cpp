#include <iostream>

using namespace std;

int main(){

  int n;
  cin >> n;
  int step = 1, sum = 1;
 
  for( int i = 1 ; i <= n ; i++)
  {
    step <<= 1;
    sum += step;
  }
  cout << sum;


return 0;
}