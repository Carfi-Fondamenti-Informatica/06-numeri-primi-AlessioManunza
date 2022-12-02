#include "libreriaUno.h"

bool nprimo (int n ) {
    int div=1 ;
    int i=0 ;
    while (i<=1 and div<=n/2) {
        if (n%div==0) {
             i++;
        }
        div++;
    }
    if (i==1) {
        return true ;
    }
    else {
        return false ;
    }
}
