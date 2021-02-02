#include <iostream>

using namespace std;

int main(){

int n, m, row, col;
cin >> n >> m;
int a[n][m];
int r[n], c[m];
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cin >> a[i][j];
    }
}

for(int i = 0; i < n; i++){
    r[i] = 0;
    for(int j = 0; j < m; j++)
        r[i] += a[i][j];
}

for(int j = 0; j < m; j++){
    c[j] = 0;
    for(int i = 0; i < n; i++)
    c[j] += a[i][j];
}


for(int i = 0; i < n; i++){
    cout << "The sum of row number " << i + 1 << " is " << r[i];
    cout << endl;
}
for(int j = 0; j < m; j++){
    cout << "The sum of column number " << j + 1 << " is " << c[j];
    cout << endl;
}

return 0;
}