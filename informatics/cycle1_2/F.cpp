#include <iostream>

using namespace std;

int main(){

int n;
  cin >> n;
  double sum = 0;
 
  for(long i = 1 ; i <= n ; i++)
    sum += 1.0/(i*i);
 
  printf("%0.8f",sum);

return 0;
}