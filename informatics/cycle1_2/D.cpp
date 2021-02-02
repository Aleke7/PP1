#include <iostream>

using namespace std;

int main(){

int n, k;
long long C = 1;
cin >> n >> k;
for (int i = 1;i <= k;i++){
    C *= (n - k + i);
    C /= i;
}
  cout << C; 

return 0;
}