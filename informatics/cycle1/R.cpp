#include <iostream>

using namespace std;

int main(){

  long long a, b, c, d, e;
  cin >> a >> b >> c >> d >> e ;
  int k = 0;
 
  for (int i = 0; i <= 1000; i++ )
    if (a*i*i*i + b*i*i + c*i + d == 0)
      if (i - e != 0)
        k++;
  cout << k ;

return 0;
}