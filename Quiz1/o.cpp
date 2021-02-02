#include <iostream>

using namespace std;

int main(){

int n, d1, d2, d3, d4;
cin >> n;

d1 = n % 10;
d2 = (n % 100 - n % 10) / 10;
d3 = (n %1000 - n % 100) / 100;
d4 = n / 1000;
if (d4 == d1 && d2 == d3){
    cout << "YES";
}else{
    cout << "NO";
}
    return 0;
}