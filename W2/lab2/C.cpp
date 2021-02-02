#include <iostream>

using namespace std;

int main(){

unsigned int year;

cin >> year;

if (year % 4 == 0){
    cout << "YES" << endl;
}else if (year % 400 == 0){
    cout << "YES" << endl;
}else if (year % 100 == 0){
    cout << "NO" << endl;
}else{
    cout << "NO" << endl;
}
return 0;
}