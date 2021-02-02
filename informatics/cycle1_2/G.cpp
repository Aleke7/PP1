 #include <iostream>

using namespace std;

int main(){
 
 int n;
  cin >> n;
  double sum = 1.0;
 
  int sign = -1;
  for(int i = 1 ; i <= n ; i++) {
    sum += sign / ( 2.0 * i + 1 );
    sign = -sign;
  }
 
  printf("%0.8f", 4 * sum);
  return 0;
}