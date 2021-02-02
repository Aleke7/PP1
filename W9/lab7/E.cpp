#include <bits/stdc++.h>

using namespace std;

string check(int n){
    if(n == 1)
    return "Yes";
    if(n % 2 != 0)
    return "No";
    return check(n / 2);
}
     
int main(){
    
unsigned long n;
cin >> n;
cout << check(n);
return 0;
}