#include <bits/stdc++.h>

using namespace std;

double len(int x1, int y1, int x2, int y2){
    double length = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    return length;
}

int main(){

int n, x, y, l;
cin >> n >> x >> y >> l;

int xi, yi;
int k = 0;
bool check = false;
for(int i = 1; i <= n; i++){
    cin >> xi >> yi;
    if(len(x, y, xi, yi) <= l){
        check = true;
        k = i;
        break;
    }
    
}

if(check)
cout << k;
else cout << "Yes";


return 0;
}