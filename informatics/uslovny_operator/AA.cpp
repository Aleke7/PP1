#include <iostream>

using namespace std;

int main(){

unsigned int m, n, x, y;
cin >> m >> n;
cin >> x >> y;

 if (x!=1) cout<<x-1<<" "<<y<<endl;
  if (x!=m) cout<<x+1<<" "<<y<<endl;
  if (y!=1) cout<<x<<" "<<y-1<<endl;
  if (y!=n) cout<<x<<" "<<y+1;

return 0;
}