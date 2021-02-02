#include <bits/stdc++.h>

using namespace std;

int main(){

int n, a, b;

cin >> n;
for(int i = 0; i < n; i++){
    cin >> a >> b;
    int reva = 0;
    int revb = 0;
    
    while(a > 0){
        reva = reva * 10 + a % 10;
        a /= 10;
        }
    while(b > 0){
        revb = revb * 10 + b % 10;
        b /= 10;
        }
        
        int sum = reva + revb;
        int revsum = 0;
        
    while(sum > 0){
        revsum = revsum * 10 + sum % 10;
        sum /= 10;
        }
        
    cout << revsum << endl;
}

return 0;
}