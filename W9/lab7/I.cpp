#include <bits/stdc++.h>

using namespace std;

int f(long sum){
    int n;
    cin >> n;
    sum += n;
    if(n == 0)
    return sum;

    return f(sum);
}
     
int main(){

cout << f(0);

return 0;
}