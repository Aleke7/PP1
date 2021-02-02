#include <bits/stdc++.h>

using namespace std;


int main(){

int n;
map<string, int> q;

cin >> n;

for(int i = 0; i < n; ++i){
    string s;
    cin >> s;
    q[s]++;
}

int cnt = 0;
map<string, int>::iterator it;
for(it = q.begin(); it != q.end(); it++){
    if(it->second == 3) 
    cnt++;
}
cout << cnt;
return 0;
}