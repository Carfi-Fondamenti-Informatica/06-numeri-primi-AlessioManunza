#include <iostream>
#include "lib.h"

using namespace std;

int main(){
   int n , i=0 ;
    cin >> n;
    if (nprimo(n,i) ==true) {
        cout << "numero primo" << endl;
    }
    else {
        cout << "numero non primo" << endl;
    }

}
