#include <bits/stdc++.h>

using namespace std;

int main(){

int x1, y1, x2, y2, x3, y3;
cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

if((x2-x1)*(x3-x1)+(y2-y1)*(y3-y1)==0){
    cout << x2+x3-x1 << " " << y2+y3-y1;
}
else if((x2-x1)*(x3-x2)+(y2-y1)*(y3-y2)==0){
    cout << x1+x3-x2 << " " << y1+y3-y2;
}
else if((x3-x1)*(x3-x2)+(y3-y1)*(y3-y2)==0){
    cout << x1+x2-x3 << " " << y1+y2-y3;
}

return 0;
}