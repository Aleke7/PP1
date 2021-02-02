#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
getline(cin, s);
int amountof1 = 0, amountof2 = 0, amountof3 = 0;

for(int i = 0; i < s.size(); i++){
    if(s[i] == '1'){
        amountof1++;
    }
    if(s[i] == '2'){
        amountof2++;
    }
    if(s[i] == '3'){
        amountof3++;
    }
}

if(amountof1 == amountof2 && amountof1 == amountof3)
cout <<"YES";
else if(amountof1 == amountof3 && amountof2 == 0)
cout <<"YES";
else if(amountof3 == amountof2 && amountof1 == 0)
cout <<"YES";
else if(amountof1 == amountof2 && amountof3 == 0)
cout <<"YES";
else cout << "NO";
return 0;
}