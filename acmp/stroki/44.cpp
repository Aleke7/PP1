#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;

string strela1 = ">>-->";
string strela2 = "<--<<";
int cnt = 0;
for(int i = 0; i < s.size(); i++){
    if(s.substr(i, 5) == strela1 || s.substr(i, 5) == strela2){
        cnt++;
    }
}
cout << cnt;
return 0;
}