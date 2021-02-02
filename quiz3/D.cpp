#include <bits/stdc++.h>

using namespace std;
 
bool checking(string x, string y){
  if(x.size() != y.size()){
    return 0;
  }
  for(int i = 0; i < x.size(); i++){
    if(x[i] >= 'A' && x[i] <= 'Z'){
      x[i] += ' ';
    }
    if(y[i] >= 'A' && y[i] <= 'Z'){
      y[i] += ' ';
    }
    if(x[i] != y[i] && !(x[i] == 'b' && y[i] == 'p' || x[i] == 'p' && y[i] == 'b') && !(x[i] == 'i' && y[i] == 'e' || x[i] == 'e' && y[i] == 'i')){
      return 0;
    }
  }
  return 1;
}
 
int main(){

int n;
cin >> n;

string s,t;
for(int i = 1; i <= n; i++){
    cin >> s >> t;
    if(checking(s, t)){
    cout << "Yes";
    }else{
    cout << "No";
    }
    cout << endl;
  }
return 0;
}