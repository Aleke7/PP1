#include <bits/stdc++.h>
using namespace std;
string func(string s){
    string res = "";
    int temp = 0;
    for(int i = s.size() - 1; i >= 0; --i){
        int t = (s[i] - '0') * 2 + temp;
        temp = 0;
        if(t >= 10)
            temp = 1;
        res.insert(0, 1, char(t % 10 + 48));
    }
    if(temp)
        res.insert(0, 1, char(temp + 48));
    return res;
}
int main(){
    int n;
    cin >> n;
    string s = "2";
    for(int i = 1; i < n; ++i){
        s = func(s);
    }
    cout << s;
    return 0;
}