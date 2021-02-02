#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(unsigned long a){
    for(unsigned long i = 2; i <= sqrt(a); ++i){
        if(a % i == 0){
            return 0;
        }
    }
    return 1;
}
 
int main(){
    unsigned long m,n;
    int d = 0;
    cin >> n;
    string ss;
    vector<int> b;
    vector<int> a;
    for(unsigned long i = 0; i <= 21000; ++i){
        if(isPrime(i)){
            d = i;
            while(d){
                a.push_back(d % 10);
                d/=10;
            }
            for(int j = a.size() - 1; j >= 0; --j)
                ss.push_back(a[j] + '0');
            a.clear();
        }
    }
    
    for(int i = 0; i < n; ++i){
        cin >> m;
        cout << ss[m];
    }
    return 0;
}