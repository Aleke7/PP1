#include <iostream>

using namespace std;

int main(){

unsigned int x;
cin >> x;

int x1,x10;
  x1=x%10;
  x10=x/10;
 
  if (x10==1) cout<<"X";
  if (x10==2) cout<<"XX";
  if (x10==3) cout<<"XXX";
  if (x10==4) cout<<"XL";
  if (x10==5) cout<<"L";
  if (x10==6) cout<<"LX";
  if (x10==7) cout<<"LXX";
  if (x10==8) cout<<"LXXX";
  if (x10==9) cout<<"XC";
  if (x10==10) cout<<"C";
 
  if (x1==1) cout<<"I";
  if (x1==2) cout<<"II";
  if (x1==3) cout<<"III";
  if (x1==4) cout<<"IV";
  if (x1==5) cout<<"V";
  if (x1==6) cout<<"VI";
  if (x1==7) cout<<"VII";
  if (x1==8) cout<<"VIII";
  if (x1==9) cout<<"IX";


return 0;
}