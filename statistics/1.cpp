#include <bits/stdc++.h>

using namespace std;


int main(){

int n; 
cin >> n;
vector<int> v;
map<int, int> mp;

int sum = 0;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    sum += x;
    v.push_back(x);
}


double mean;
for(int i = 0; i < v.size(); i++){
    mean = (double)sum / n;
}
sort(v.begin(), v.end());

double nn = (double)(n + 1) / 2;
double median;
for(int i = 0; i < v.size(); i++){
    if(n % 2 == 0){
        median = ((double)(v[floor(nn)] + v[ceil(nn)]) / 2) - 1; 
    }
    else{
        median = v[(int)nn - 1];
    }
}

int mode;
int mx = 1;
for(int i = 0; i < v.size(); i++){
    mp[v[i]]++;
    if(mx < mp[v[i]]){
        mx = mp[v[i]];
        mode = v[i];
    }
}

cout << mode;

return 0;
}