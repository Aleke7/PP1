#include <iostream>

using namespace std;

int main(){

int n, num = 0;

cin >> n;

int a[n];

for(int i = 0; i < n; i++){

    cin >> a[i];
}

for(int i = 0; i < n; i++){
while(a[i] != 0){
    if(a[i] % 10 == 0)
    num++;
    a[i] /= 10;
}
}

cout << num << endl;
    return 0;
}