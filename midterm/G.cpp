#include <bits/stdc++.h>

using namespace std;


int main(){

string a;
cin >> a;

char repeated;
for (int i = 0; i < a.length(); ++i) {
    for (int j = 0; j < i; ++j) {
    if (a[j] == a[i]){
    if (repeated.find(a[i]) == repeated.end()){
    repeated.insert(a[i]);
    cout << a[i];
        }
        }
    }
} 
return 0;
}
