#include <bits/stdc++.h>

using namespace std;

int main(){

string s, p = "";
cin >> s;
p = s;

int n = s.size();

sort(s.begin(), s.end());

cout <<"The anagram variants for string " << p << " are:"<< endl;

do{
    cout << s << endl;
}
while(next_permutation(s.begin(),s.end()));
return 0;
}