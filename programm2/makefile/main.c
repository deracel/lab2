#include <stdio.h>
#include "fun.h"

int main(){
    long double xtry = 0;
    long double etry = 0;
    int nom = 1;
    int x = input_xtry(&xtry);
    printf("%d\n", x);
    int e = input_etry(&etry);
    printf("%d\n", e);
    long double xfun = xtry;
    long double efun = etry;
    long double t = test(xfun, &nom, efun);
    long double root = sqr(xfun);
    printf("\n");
    printf("Вывод n - %d\n", nom - 1);
    printf("Через формулу с корнем  %.63Lf\n", root);
    printf("Разложенем в ряд        %.63Lf\n", t);
    return 0;
}