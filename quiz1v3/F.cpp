#include <bits/stdc++.h>

using namespace std;

int main(){

int d, c;
cin >> d >> c;
int initial = d * 100 + c;

int p, n;
cin >> p >> n;
int cost = p * n;

int eventual = initial - cost;
int $ = eventual / 100;
int cent = eventual % 100;

cout << $ << " " << cent;

return 0;
}