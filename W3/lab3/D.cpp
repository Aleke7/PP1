#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;
int a[n];

for(int i = 1; i <= n; i++){
cin >> a[i];
}

int max = -999999;
int ind = 0;
for(int i = 1; i <= n; i++){
    if(max < a[i]){
    max = a[i];
    ind = i;
    } 

}
cout << ind << endl;
    return 0;
}