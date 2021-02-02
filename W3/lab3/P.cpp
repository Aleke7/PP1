#include <iostream>
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;

double x = sqrt(n);

if(n % int(x) == 0)
cout << "Yes";
else cout << "No";
    return 0;
}