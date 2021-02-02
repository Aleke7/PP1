#include <iostream>

using namespace std;

int main(){

string str;
cin >> str;
int uppercnt = 0;
int lowercnt = 0;
for(int i = 0; i < str.size(); i++){
    if(str[i] >= 65 && str[i] <= 90)
    uppercnt++;
    else if(str[i] >= 97 && str[i] <= 122)
    lowercnt++;
} 
cout << lowercnt << " " << uppercnt;
return 0;
}