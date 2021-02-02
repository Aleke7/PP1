#include <bits/stdc++.h>

using namespace std;

int main(){

string a, b;
cin >> a >> b;

for(int i = 0; i < b.size(); i++){
    if(a.find(b[i]) != -1){
    b.erase(i, 1);
    }
} 
cout << b;
return 0;
}
