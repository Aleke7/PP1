#include <iostream>

using namespace std;

int main(){

unsigned int n;
cin >> n;
unsigned int a[n];

for(int i = 0; i< n; i++){

    cin >> a[i];
}
int max = a[0], min = a[0];
for(int i = 0; i< n; i++){
    if(max < a[i])
    max = a[i];
    else if(min > a[i])
    min = a[i];
    }

int c;
c = max & min;
cout << c << endl;

    return 0;
}