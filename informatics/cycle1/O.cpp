#include <iostream>

using namespace std;

int main(){

int n, x;
cin >> n;
bool zeroExist = false;
for(int i = 1; i <= n; i++){
    cin >> x;
    if(x == 0){
      zeroExist = true;
      break;
    }
}
 if (zeroExist)
    cout<<"YES";
  else
    cout << "NO";

return 0;
}