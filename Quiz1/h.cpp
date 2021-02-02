#include <iostream>

using namespace std;

int main(){
    
int n, even = 0,odd = 0;
cin >> n;

while(n != 0){
if(n % 2 == 0){
even = even + n%10;
n = n/10;
}else{
odd = odd + n%10 ;
n = n/10;
}
}
if(even>odd) 
cout << even;
else if(even < odd)
cout <<odd;
else 
cout << even + odd;
    return 0;
}