#include <bits/stdc++.h>

using namespace std;

string tolower(string s){
    for(int i =0;i<s.size();i++){
        s[i] = s[i] + 32;
    }
    return s;
}

bool mycomp(string s1, string s2){
    tolower(s1);
    tolower(s2);
    bool ok = true;
    for(int i =0;i<s1.size();i++){
        if(i==s2.size() || s1[i]>s2[i]) 
        return false;
        else if(s1[i]<s2[i]) return true;
    }
}

int main(){

int n;
cin>>n;
string s[n];
int x[n];

for(int i =0;i<n;i++){
cin>>s[i];
cin>>x[i];
}
sort(s, s + n, mycomp);
sort(x, x + n);

for(int i = 0; i < n; i++){
cout <<s[i] << " " << x[i] <<endl;
}

return 0;
}