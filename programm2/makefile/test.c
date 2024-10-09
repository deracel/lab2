#include "fun.h"
#include <limits.h>
#include <math.h>
#include <stdio.h>

long double test(long double xfun, int *nom, long double efun){
    long double summa = 0;
    long double summado = 0;
    long double pred = xfun;
    for (int i = 1; i <= INT_MAX; ++i){
        *nom = i;
        if (fabs((summa) - (summado)) > efun || pred == xfun){
            pred = pred * xfun * (2 * i - 1)/i;
            summado = summa;
            summa = summado + pred;
    }
        if (fabs(summa - summado) < efun){
            return summado + xfun;//коррекция правильного ответа
            break;
        }
    }
}
