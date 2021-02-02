#include <iostream>

using namespace std;

int main(){

int n, i = 0;
cin >> n;

while(n){
i += n % 2;
n /= 2;
}
if(i == 1)
cout << "YES";
else cout << "NO";


return 0;
}