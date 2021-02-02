#include <bits/stdc++.h>

using namespace std;

int rec(int cur, int n){
    if(n == 0){
        return cur;
    }
    cur *= 2;
    rec(cur, n-1);
}
int main(){
int degreeof2;
cin >> degreeof2;

int cur = 1;

cout <<rec(cur, degreeof2);
return 0;
}