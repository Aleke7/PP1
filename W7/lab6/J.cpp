#include <bits/stdc++.h>

using namespace std;

int findmax(int a, int b, int c, int d){
    if(a > b && a > c && a > d)
    cout << a;
    if(b > a && b > c && b > d)
    cout << b;
    if(c > a && c > b && c > d)
    cout << c;
    if(d > a && d > b && d > c)
    cout << d;
}

int main(){

int a, b, c, d;
scanf("%d %d %d %d",&a,&b,&c,&d); 
findmax(a, b, c, d);

return 0;
}