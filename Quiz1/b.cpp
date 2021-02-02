#include <iostream>

using namespace std;

int main(){

int a, b, c, d, e ,f;

cin >> a >> d;
cin >> b >> e;
cin >> c >> f;

if(a + b +c > d + e + f){
    cout << "Grats Yelnur" << endl;
}else if (a + b + c == d + e + f){
    cout << "Draw" << endl;
}else{
    cout << "Hee Hee Losers" << endl;
}

    return 0;
}