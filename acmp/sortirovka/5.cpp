#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

vector<int> v;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
}

int cnt1 = 0, cnt2 = 0;
vector<int> v1, v2;
for(int i = 0; i < v.size(); i++){
    if(v[i] % 2 != 0){
        cnt1++;
        v1.push_back(v[i]);
    }
    if(v[i] % 2 == 0){
        cnt2++;
        v2.push_back(v[i]);
    }
}

for(int i = 0; i < v1.size(); i++){
    cout << v1[i] << " ";
}
cout << endl;

for(int i = 0; i < v2.size(); i++){
    cout << v2[i] << " ";
}
cout << endl;

if(cnt1 <= cnt2)
cout << "YES";
else cout << "NO";

return 0;
}