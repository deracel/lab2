#include <stdio.h>
#include <math.h>
#include "fun.h"

long double test(int nfun, long double xfun){
    long double summa = 0;
    long double pred = xfun;
    for (int i = 1; i <= nfun + 1; ++i){//требуем до n + 1, потому что реально значение при m соответствуют значению в моей функуии при m + 1 
        summa = summa + pred;
        pred = pred * xfun * (2 * i - 1)/i;
    }
    return summa;
}