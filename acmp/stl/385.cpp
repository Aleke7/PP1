#include <bits/stdc++.h>

using namespace std;

double solve(int x1, int y1, int x2, int y2){
    return sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
}

int main()
{
    int n;
    cin >> n;
    set<double> st;
    int s[n][2];
    for(int i = 0; i < n; ++i)
        cin >> s[i][0] >> s[i][1];
    for(int i = 0; i < n; ++i)
        for(int j = i + 1; j < n; ++j)
            st.insert(solve(s[i][0], s[i][1], s[j][0], s[j][1]));
    cout << st.size() << endl;
    for(auto i: st)
        cout << fixed << setprecision(9) << i << endl;
    return 0;
}