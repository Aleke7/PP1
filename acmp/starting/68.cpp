#include <bits/stdc++.h>

using namespace std;

int main(){

string s;
int n;
cin >> s >> n;

if(s == "Home"){
    cout << "Yes";
    return 0;
}

if(n % 2 != 0){
    cout << "Yes";
    return 0;
}
else{
    cout << "No";
    return 0;
}
return 0;
}