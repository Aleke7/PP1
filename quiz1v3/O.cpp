#include <bits/stdc++.h>

using namespace std;

int main(){

int a, b;
char x;
unsigned long long res;
cin >> a >> x >> b;

if(x == '+'){
    res = a + b;
    cout << a << " + " << b << " = " << res;
}
if(x == '-'){
    res = a - b;
    cout << a << " - " << b << " = " << res;
}
if(x == '*'){
    res = a * b;
    cout << a << " * " << b << " = " << res;
}
if(x == '/'){
    res = a / b;
    cout << a << " / " << b << " = " << res;
}

return 0;
}