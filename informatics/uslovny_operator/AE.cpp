#include <iostream>

using namespace std;

int main(){

int a, b, c;
cin >> a >> b >> c;

if(a <= b && a <= c && b <= c)
cout << a << " " << b << " " << c;                  
else if(a <= b && a <= c && c <= b)
cout << a << " " << c << " " << b;
else if(b <= a && b <= c && a <= c)
cout << b << " " << a << " " << c;
else if(b <= a && b <= c && c <= a)
cout << b << " " << c << " " << a;
else if(c <= a && c <= b && a <= b)
cout << c << " " << a << " " << b;
else if(c <= a && c <= b && b <= a)
cout << c << " " << b << " " << a;


return 0;
}

/*int a,b,c,t;
  cin>>a>>b>>c;
 
  if (a>b) swap(a,b);
  if (a>c) swap(a,c);
  if (b>c) swap(b,c);
 
  cout<<a<<" "<<b<<" "<<c;*/