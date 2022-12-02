#include "libreriaUno.h"

bool nprimo (int n , int i) {
    int div=1 ;
    bool risultato;
    i=0;
    while(i<=1 and div<=n/2) {
        if (n%div==0) {
         bool nprimo(i++) ;
        }
        div++;
    }
    if (i==1) {
        risultato = true ;
        return true;
    }
    else {
        risultato = false ;
       return false ;
    }
}
