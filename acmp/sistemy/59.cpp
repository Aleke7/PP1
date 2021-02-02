#include <bits/stdc++.h>

using namespace std;

int main(){

int n, k;
cin >> n >> k;
string s = "";
while(n != 0){
    s += (n % k) + '0';
    n /= k; 
}

reverse(s.begin(), s.end());

int sum = 0;
long long mltp = 1;
for(int i = 0; i < s.size(); i++){
    sum += s[i] - '0';
    mltp *= s[i] - '0';
}

cout << mltp - sum;

return 0;
}