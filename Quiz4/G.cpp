#include <bits/stdc++.h>

using namespace std;

void cost(string s, int n, int a, int b){
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i < n; i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
        cnt1 += b;
    }else{
        cnt2 += a;
        }
    }
    
    cout << min(cnt1, cnt2);
}

int main(){

string s;
int n, cul, clu;

cin >> n >> cul >> clu;
cin >> s;

cost(s, n, cul, clu);

return 0;
}