#include <bits/stdc++.h>

using namespace std;

int main(){

vector<int> a;
    string str;
    int in;
    getline(cin,str);
    stringstream s(str);
    while(s >> in)
        a.push_back(in);
    int s1 = a[0], s2 = a[1];
    for(int i = 2; i < a.size(); i+=2)
        if(a[i] < s1)
            s1 = a[i];
    for(int i = 3; i < a.size(); i+=2)
        if(a[i] > s2)
            s2 = a[i];
    cout << s1 + s2;


return 0;
}