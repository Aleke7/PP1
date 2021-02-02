#include <bits/stdc++.h>

using namespace std;

map <pair <int, int>, int> num;

int a[100010], b[100010];

int main(){

int n;
cin >> n;

for(int i = 0; i < n; i++){
    cin >> a[i] >> b[i];

    cout << max(num[make_pair(a[i],b[i])],num[make_pair(a[i],b[i])]) << endl;
    
    num[make_pair(a[i],b[i])]++;
    num[make_pair(b[i],a[i])]++;
}

return 0;
}