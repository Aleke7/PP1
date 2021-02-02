#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;
int sum = 0;
vector<pair<double, string> > v;
for(int i = 0; i < n; i++){
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        string s;
        double x;
        cin >> x >> s;
        v.push_back(make_pair(x, s));
    }
    sum += m;
}

sort(v.begin(), v.end());
reverse(v.begin(), v.end());

cout << sum << endl; 
vector<pair<double, string> >::iterator it;
for(it = v.begin(); it != v.end(); it++){
    cout << fixed << setprecision(2) << it->first << " " << it->second << endl;
}

return 0;
}