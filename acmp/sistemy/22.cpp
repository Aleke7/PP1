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

reverse(s.begin(), s.end());

int cnt = 0; 
for(int i = 0; i < s.size(); i++){
    if(s[i] == '1'){
        cnt++;
    }
}

cout << cnt;

return 0;
}