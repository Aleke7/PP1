#include <bits/stdc++.h>
   
using namespace std;
   
int main(){
    int n,i,j, a;
    cin >> n >> i >> j;
    if( i < j)  
       a = i + abs(j - n) - 1;
    else
      a = j + abs(i - n) - 1;
    int b = abs(i - j) - 1;
    if(a < b)
        cout << a;
    else
        cout << b;
    return 0;
}
