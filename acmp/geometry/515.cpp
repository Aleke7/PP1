#include <bits/stdc++.h>
using namespace std;
double solve(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
int main()
{
    int n;
    double s = 0;
    cin >> n;
    int x1 = 0, y1 = 0, x2, y2;
    for(int i = 0; i < n; ++i){
        cin >> x2 >> y2;
        s += solve(x1, y1, x2, y2);
        x1 = x2, y1 = y2;
    }
    s += solve(x1, y1, 0, 0);
    cout << fixed << setprecision(3) << s << endl;
    return 0;
}