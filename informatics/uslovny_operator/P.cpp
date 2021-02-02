#include <iostream>

using namespace std;

int main(){

int a, b, c, d;
cin >> a >> b >> c >> d;
 
int e = c - a;
int f = d - b;
if (f < 0){
f += 100;
e--; 
}
cout << e << " " << f;
return 0;
}