#include <bits/stdc++.h>

using namespace std;

vector <int> p;

void prime(){
    int cnt = 0;
    for(int i = 2; i <= 15000; i++){
        for(int j = 1; j <= sqrt(i); j++){
            if(i % j == 0){
            cnt += 2;
            }
            if(j*j == i){
            cnt--;
            }
        }
        if(cnt == 2){
         p.push_back(i);
        }
        cnt = 0;
    }
}

int main(){
int n;
cin >> n;

prime();
cout << p[n - 1];
return 0;
}