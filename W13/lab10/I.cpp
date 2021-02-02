#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

vector<int> a, b;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    a.push_back(x);
    b.push_back(x);
}

reverse(b.begin(), b.end());
for(int i = 0; i < a.size(); i++){
    if(a[i] == a[a.size()-1-i]){
        cout << "OK" << endl;
    }
    else{
        cout << "Instead of " << a[i] << " here was " << b[i] << endl;
    }
}
return 0;
}