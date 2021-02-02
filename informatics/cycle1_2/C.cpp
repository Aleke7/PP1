#include <iostream>

using namespace std;

int main(){

/*int n;
  cin>>n;
  cout<<(1<<n);*/

    const int count = 2;
  int n, rez = 1;
  cin >> n;
  for(int i = 1 ; i <= n ; i++)
    rez *= count;
  cout << rez;


return 0;
}