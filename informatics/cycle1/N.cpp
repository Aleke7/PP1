#include <iostream>

using namespace std;

int main(){

int n, x, zero = 0, pos = 0, neg = 0;
cin >> n;

for(int i = 1; i <= n; i++){
    cin >> x;
    if(x == 0)
    zero++;
    else if(x > 0)
    pos++;
    else if(x < 0)
    neg++;
}
cout << zero << " " << pos << " " << neg;
return 0;
}