#include <iostream>


using namespace std;

int main(){

unsigned int a, b, c;
cin >> a >> b >> c;

if (a>b) swap(a,b);
  if (b>c) swap(b,c);
  if (a>b) swap(a,b);
if(a + b > c && b + c > a && a + c > b){
    if(c * c == a * a + b * b)
    cout << "right";
    else if(c * c < a * a + b * b)
    cout << "acute";
    else if(c * c > a * a + b * b)
    cout << "obtuse";
}
else cout << "impossible";

return 0;
}