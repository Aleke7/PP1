#include <bits/stdc++.h>

using namespace std;

int pr[1123];

void Prime(){
    pr[2] = 1;
    
    for(int i = 3; i <= 1000; i++){
        bool f = false;
        for(int j = 2; j < i; j++){
            if (i % j == 0){
                f = true;
                break;
            }
        }
        if(!f){
            pr[i] = 1;
        }
    }
}

int main(){

int n;
int i = 2;
cin >> n;

Prime();

while(!(pr[i] && pr[n - i]))
    i++;
    cout << i << " " << n - i;
    
return 0;
}