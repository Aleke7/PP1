#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num){
    if(num == 1)
    return 0;

    for(int i = 2; i < sqrt(num); i++){
        if(num % i == 0)
        return 0;
    }
    return 1;
}

void count(int k, vector<int> v){
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > k && isPrime(v[i])){
            cnt++;
        }
    }
    cout << cnt;
}

int main(){

int n;
vector<int> v;

cin >> n;

for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
}
int k;
cin >> k;

count(k, v);

return 0;
}