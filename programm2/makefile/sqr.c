#include "fun.h"
#include <math.h>

long double sqr(long double xfun){
    long double znach = (xfun / sqrt(1 - 2 * xfun));
    return znach;
}
