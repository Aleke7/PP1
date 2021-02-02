#include <bits/stdc++.h>

using namespace std;

void valid(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if((s[i] - '0') % 2 != 0){
        cnt++;
        }
    }
    if(cnt > 0)
    cout << "Not valid";
    else cout << "Valid";
}
int main(){

string s;
cin >> s;
valid(s);

return 0;
}