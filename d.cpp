#include <iostream>

using namespace std;
int main(){

string str;
cin >> str;

for(int i = 0; i < str.length(); i++){
    if(str[0] == str[str.length() - 1] && str[1] == str[2])
    cout << "YES";
    else cout << "NO";
} 

return 0;
}