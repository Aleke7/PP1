#include <bits/stdc++.h>

using namespace std;

int main(){

int a, b;
int score1 = 0, score2 = 0;
for(int i = 1; i <= 4; i++){
    cin >> a >> b;
    score1 += a;
    score2 += b;
}

if(score1 > score2)
cout << 1;
if(score1 < score2)
cout << 2;
if(score1 == score2)
cout << "DRAW";

return 0;
}