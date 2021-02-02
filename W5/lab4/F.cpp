#include <iostream>

using namespace std;

int main(){

int n, row, col, max = -9999999;    
cin >> n;    
int a[n][n];    

for(int i = 1; i <= n; i++){        
    for(int j = 1; j <= n; j++){            
        cin >> a[i][j];
    }
}    

for(int i = 1; i <= n; i++){        
    for(int j = 1; j <= n; j++){            
        if(a[i][j] > max){                
            max = a[i][j];                
            row = i;                
            col = j;            
            }
    }
}    
    cout << ++row << " " << ++col;
    return 0;
}