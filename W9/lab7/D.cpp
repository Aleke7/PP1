#include <bits/stdc++.h>

using namespace std;

int summa(string s, int i, int sum){
    if(i == s.size())
    return sum;
    sum += s[i] - '0';
    return summa(s, i + 1, sum);
}
     
int main(){
    
string s;
cin >> s;

cout << summa(s, 0, 0);

return 0;
}