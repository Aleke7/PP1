#include <bits/stdc++.h>

using namespace std;

int pol[30][30];
int pol2[30][30];

int main(){

int n;
cin >> n;

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> pol[i][j];
    }
}
  
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        pol2[i][n - 1 - j] = pol[j][i];
    }
}

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout << pol2[i][j] << " ";
    }
    cout << endl;
}

return 0;
}