#include <iostream>
#include "lib.h"

using namespace std;

int main(){
  int a , b , i;
bool risultato ;
cin >> a ;
risultato = nprimo(a , i) ;
if (risultato ==true ){
    cout << "numero primo" << endl;
}
else {
    cout << "numero non primo" << endl;
}
  return 0;
}
