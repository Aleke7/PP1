#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;
string s = "";
while(n != 0){
    s += (n % 2) + '0';
    n /= 2; 
}

int num = 0;
for(int i = 0; i < s.size(); i++){
    num *= 2;
    num += s[i] - '0';
}

cout << num;

return 0;
}