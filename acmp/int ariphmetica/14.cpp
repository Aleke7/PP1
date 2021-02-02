#include <bits/stdc++.h>

using namespace std; 

int main(){ 

long long a, b; 
cin >> a >> b; 

long long c = a, d = b; 

while(b){ 
 a %= b; 
 swap(a, b); 
} 
cout << (c * d) / a; 
}