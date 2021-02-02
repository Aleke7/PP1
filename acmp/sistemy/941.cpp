#include <bits/stdc++.h>

using namespace std;

int main(){

string s1, s2;
cin >> s1 >> s2;

long long num1 = 0;
for(int i = 0; i < s1.size(); i++){
    num1 *= 3;
    num1 += s1[i] - '0';
}

long long num2 = 0;
for(int i = 0; i < s2.size(); i++){
    num2 *= 3;
    num2 += s2[i] - '0';
}

cout << num1 + num2;

return 0;
}