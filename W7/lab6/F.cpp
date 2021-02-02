#include <bits/stdc++.h>

using namespace std;

void valid(string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9')
        cnt++;
        }
    if(cnt >= n)
    cout << "YES";
    else cout << "NO";
}

int main(){

string s;
int n;
cin >> s >> n;

valid(s, n);

return 0;
}