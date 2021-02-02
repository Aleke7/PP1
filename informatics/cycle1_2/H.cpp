#include <iostream>

using namespace std;

int main(){

  const int osn = 2;
  int n;
  cin >> n;
  int step = 1, sum = 1;
 
  for( int i = 1 ; i <= n ; i++)
  {
    step *= osn;
    sum += step;
  }
  cout << sum;


return 0;
}