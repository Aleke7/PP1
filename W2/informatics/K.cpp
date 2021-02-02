#include <iostream>

using namespace std;

int main(){

int n, h, m;

cin >> n;
/*
h = n / 60;
m = n % 60;

if (h >= 24){
    cout << h % 24 << " " << m << endl;
}else{
    cout << h << " " << m << endl;
}
*/

if (n >= 1440){
cout << n / 60 % 24 << " " << n % 60 << endl;
}else{
    cout << n / 60 << " " << n % 60 << endl;
}

    return 0;
}