#include <stdio.h>
#include <math.h>
#include "fun.h"
#include <ctype.h>

int main(){
    long double xtry = 0;
    int ntry = 0;
    int x = input_xtry(&xtry);
    printf("%d___%Lf\n", x, xtry);
    int n = input_ntry(&ntry);
    printf("%d___%d\n", n, ntry);
    long double xfun = xtry;
    int nfun = ntry;
    printf("%Lf,%d\n", xfun, nfun);
    long double t = test(nfun, xfun);
    long double root = sqr(xfun);
    printf("Через формулу с корнем  %.19Lf\n", root);
    printf("Разложенем в ряд        %.19Lf\n", t);
    return 0;
}