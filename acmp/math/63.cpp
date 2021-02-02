#include <bits/stdc++.h>

using namespace std;

int main(){

int sum, proiz;
cin >> sum >> proiz;

for(int i = 1; i < sum; i++){
    for(int j = 1; j < proiz; j++){
        if(i + j == sum && i * j == proiz){
            cout << i << " " << j;
            return 0;
        }
    }
}
return 0;
}