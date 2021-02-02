#include <bits/stdc++.h>

using namespace std;

int main(){

int x1, y1, x2, y2;
cin >> x1 >> y1 >> x2 >> y2;

int n;
cin >> n;

int x3, y3;
for(int i = 1; i <= n; i++){
    cin >> x3 >> y3;
    if(2*sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1)) <= sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2))){
        cout << i << endl;
        return 0;
    }
}

cout << "NO";

return 0;
}

