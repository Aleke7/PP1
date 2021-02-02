#include <bits/stdc++.h>
#include <string>
using namespace std;

 
int N1, N2, j; 
vector <string> Name1, Name2;

/*
void f1(int n1, int n2, string name1, string name2){
for(int j = 0; j < N; j++){
}
return;
}
*/

int main(){

cin >> N1;

for (int i = 0; i < N1 ; i++) { string x1; cin >> x1; Name1.push_back(x1); }

cin >> N2;

for (int j = 0; j < N2 ; j++) { string x2; cin >> x2; Name2.push_back(x2); }

for (int i = 0; i < N1 ; i++){
    for (int j = 0; j < N2 ; j++){
    if (Name1[i] == Name2[j]){ 
    Name1.erase(Name1.begin()+i);  
    Name2.erase(Name2.begin()+j);
    }
    
    }


}
cout << "Missed students:";
for (int i = 0; i < N1 ; i++){

cout << endl << "- " << Name1[i];
}

cout << "Not in the group:";
for (int j = 0; j < N2 ; j++){
    
cout << endl << "- " << Name2[j];    
}
  
return 0;
}