#include <bits/stdc++.h>

using namespace std;

int main(){
int num; 
cin >> num;

int array[num][num];
    
for(int i = 0; i < num; i++){
    for (int j = 0; j < num; j++){
    cin >>array[i][j];
    }
}
for(int i = num - 1; i >= 0; i--){
    for (int j = 0; j + i < num; j++){
    cout << array[j][j+i] << " ";
    }
    cout << endl;
}
    
for(int i = 1; i < num; i++){
    for (int j = 0; j + i < num; j++){
    cout << array[j+i][j] <<" ";
    }
    cout << endl;
}

return 0;
}