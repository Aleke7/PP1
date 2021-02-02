#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < n; ++i){
        cin >> t;
        a.push_back(t);
    }
    for(int i = 0; i < m; ++i){
        cin >> t;
        b.push_back(t);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < a.size() - 1; ++i){
        if(a[i] == a[i + 1]){
            a.erase(a.begin() + i + 1);
            --i;
        }
    }
    for(int i = 0; i < b.size() - 1; ++i){
        if(b[i] == b[i + 1]){
            b.erase(b.begin() + i + 1);
            --i;
        }
    }
    if(a.size() == b.size()){
        for(int i = 0; i < a.size(); ++i)
            if(a[i] != b[i]){
                cout << 0;
                return 0;
            }
        cout << 1;
    }
    else
        cout << 0 << endl;
    return 0;
}