#include <iostream>
#include <cmath>
using namespace std;

int main(){

int a, b;
cin >> a >> b;

for(int i = ceil(sqrt(a)); i * i <= b; i++){
    cout << i * i << " ";
}

return 0;
}