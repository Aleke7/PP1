#include <bits/stdc++.h>
using namespace std;
int main(){

string s, t;
cin >> s >> t;
for(int i = 0; i + t.size() - 1 < s.size(); i++){
    string substr = s.substr(i, t.size());
    if(substr == t){
        cout << "YES";
        return 0;
    }
}
cout << "NO";
return 0;
}