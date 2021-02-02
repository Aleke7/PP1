#include <iostream>

using namespace std;

int main(){

unsigned int n;
cin >> n;
if(n < 100){
   if(n % 10 == 0 || n % 10 >= 5 && n % 10 <= 9 || n >= 11 && n <= 14)
   cout << n << " korov";
   else if(n % 10 == 1)
   cout << n << " korova";
   else cout << n << " korovy";
}

return 0;
}