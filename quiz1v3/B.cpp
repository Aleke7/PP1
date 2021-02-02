#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;
int sum1 = 0, sum2 = 0;
for(int i = 0; i < s.size(); i++){
    sum1 += (s[0] - '0') + (s[1] - '0');
    sum2 += (s[s.size()-1] - '0') + (s[s.size()-2] - '0');
}

if(sum1 == sum2)
cout << "YES";
else cout << "NO";

return 0;
}