#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;
int cnt = 0;
int max = -999;
for(int i = 0; i < s.size(); i++){
    if(s[i] == '0'){
        cnt++;
    }
    if(max < cnt){
        max = cnt;
    }
    if(s[i] == '1'){
        cnt = 0;
    }
}
cout << max;
return 0;
}