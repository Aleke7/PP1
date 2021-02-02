#include <bits/stdc++.h>
using namespace std;
string a[101],b[101];
bool good[101],print[101];
int cnt;
bool f(int i,int j){
  if(i == j){
    return 1;
  }
  if(a[i] == a[j]){
    if(!print[i]){
      b[cnt] = a[i];
      cnt++;
    }
    print[i] = 1;
    return 0;
  }
  return f(i + 1, j);
}
 
int main()
{
  int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
      cin >> a[i];
      if(f(0, i) == 1){
        good[i] = 1;
      }
    }
    if(cnt == 0){
      cout << "Understandable, have a great day";
      return 0;
    }
    for(int i = 0; i < cnt; i++){
      cout << b[i] << endl;
    }
}