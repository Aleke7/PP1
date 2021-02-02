#include <iostream>

using namespace std;

int main(){

int n, a, b, days;

cin >> n >> a >> b;

if(a == n){
    cout << 1;
}
else if(a == b){
    cout << "NO" << endl;
}
else if(a > b && a < n){
 days = n/(a-b) - 2;
  cout << days << endl;
}

    

return 0;
}