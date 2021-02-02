#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
int sumofeven = 0, sumofodd = 0;
cin >> s;

for(int i = 0; i < s.size(); i++){
    if(i % 2 == 0){
        sumofeven += s[i] - '0';
    }
    else{ 
    sumofodd += s[i] - '0';
    }
}
if(sumofeven == sumofodd)
cout << "YES";
else cout << "NO";

return 0;
}