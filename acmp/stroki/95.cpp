#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string str;
    cin >> str;
    int s = 0, cnt = 1, res = 10;
    if(str.size() == 1){
        cout << str[0] << " " << 0;
        return 0;
    }
    for(int i = 0; i < str.size(); ++i)
        s+=str[i] - 48;
 
    while(res > 9 && s > 9){
        cnt++;
        res = 0;
        while(s){
            res+=s % 10;
            s/=10;
        }
        s = res;
    }
    cout << s << " " << cnt;
    return 0;
}