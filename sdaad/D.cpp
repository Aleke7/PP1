#include <bits/stdc++.h>

using namespace std;

int kbon(int k, int m){
    
    if(m == 1){
    return 0;
    }
    if(m == 2){
    return 1;
    }
    else{
        return(kbon(m-2)+kbon(k*(m-1)));
    }

    
}

int main(){


return 0;
}