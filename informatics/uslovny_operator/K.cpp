#include <iostream>

using namespace std;

int main(){

unsigned int x1, y1, x2, y2;

cin >> x1 >> y1 >> x2 >> y2;

if(x2 == x1 + 1 && y2 == y1 + 2)
cout << "YES";
else if(x2 == x1 - 1 && y2 == y1 + 2)
cout << "YES";
else if(x2 == x1 + 2 && y2 == y1 + 1)
cout << "YES";
else if(x2 == x1 + 2 && y2 == y1 - 1)
cout << "YES";
else if(x2 == x1 + 1 && y2 == y1 - 2)
cout << "YES";
else if(x2 == x1 - 1 && y2 == y1 - 2)
cout << "YES";
else if (x2 == x1 - 2 && y2 == y1 + 1)
cout << "YES";
else if (x2 == x1 - 2 && y2 == y1 - 1)
cout << "YES";

else cout << "NO";

return 0;
}
