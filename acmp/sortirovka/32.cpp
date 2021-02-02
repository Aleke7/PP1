#include <bits/stdc++.h>

using namespace std;

int main(){

string a, b;
cin >> a >> b;

int maxa = -999, minb = 999;

if(stoi(a) > 0){
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    maxa = stoi(a);
}
else{
    sort(a.begin() + 1, a.end());
    if(a[0] == '0'){
        swap(a[0], a[1]);
    }
    maxa = stoi(a) * -1;
}


if(stoi(b) > 0){
    sort(b.begin(), b.end());
    if(b[0] == '0'){
        swap(b[0], b[1]);
    }
    minb = stoi(b);
}
else{
    sort(b.begin() + 1, b.end());
    reverse(b.begin(), b.end());
    minb = stoi(b) * -1;
}

cout << maxa - minb;

return 0;
}