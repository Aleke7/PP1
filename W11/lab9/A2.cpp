#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

multiset<pair<int, int> > m;
for(int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    m.insert(make_pair(x, y));
}

multiset<pair<int, int> >::iterator it;
for(it = m.begin(); it != m.end(); it++){
    cout << (*it).first << " " << (*it).second << endl;
}

return 0;
}