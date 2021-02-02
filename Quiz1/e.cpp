#include <iostream>
using namespace std;

int main(){

unsigned int n, m, sum = 0;


cin >> n >> m;
while(m % n != 0){
m = m - 1;
sum = sum + 1;

}
cout << sum << endl;
    return 0;
}