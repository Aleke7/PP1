#include <iostream>

using namespace std;

int main(){

unsigned int n, i, sum = 0;

cin >> n;

for(i = 1; i <= n; i++){       // i выполняется до тех пор пока не дойдет до условия

    sum += i;           //sum = sum + i;
}

cout << sum << endl;

    return 0;
}