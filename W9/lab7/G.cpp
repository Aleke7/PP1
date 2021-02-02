#include <bits/stdc++.h>

using namespace std;

int factorial(int n, int ans){
    if(n == 0 || n == 1)
    return ans;
    ans *= n;
    return factorial(n - 1, ans);

}
     
int main(){

int n;
long long ans = 1;

cin >> n;
cout << factorial(n, ans);
return 0;
}