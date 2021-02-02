#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
cin >> s;
queue<char> q;

for(int i = 0; i < s.size(); i++){
    q.push(s[i]);
    if(q.back() == '0' || q.front() == '0'){
            cout << q.front();
            q.pop();
        }
        if(q.size() == 2){
            q.pop(); q.pop();
        }
        if(q.size() == 1 && i == s.size() - 1) 
        cout << q.front();
}

return 0;
}