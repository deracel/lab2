//ПРОГРАММА ПОЛУЧАЕТ НА ВХОД x и n
#include <stdio.h>
#include <math.h>
#include <ctype.h>

unsigned long long dfactorial(int n);
unsigned long long factorial(int dn);
long double connect(long double f, long double df, long double x, int n, long double del, long double sum, int verh);
long double sqr(long double x);
long double input_xtry(long double xtry);
int input_ntry(int ntry);
long double test(int n, long double x);

int main(){
    long double sum = 0;
    long double del = 0;
    long double xtry = 0;
    int ntry = 0;
    long double x = input_xtry(xtry);
    int n = input_ntry(ntry);
    int verh = n; //верхний порядковый номер последовательности
    int dn = 2 * n - 1;
    unsigned long long f = factorial(n);
    unsigned long long df = dfactorial(dn);
    /*long double c = connect(f, df, x, n, del, sum, verh);*/
    long double t = test(n, x);
    long double root = sqr(x);
    printf("factorial %llu\n", f);
    printf("dfactorial %llu\n\n", df);
    printf("Через формулу с корнем  %.15Lf\n", root);
    /*printf("Разложенем в ряд        %.15Lf\n", c);*/
    printf("Разложенем в ряд        %.15Lf\n", t);
    return 0;

}
unsigned long long factorial(int n){
    if (n == 1){
        return 1;
    }
    else{
        return factorial(n - 1) * n;
    }
}
unsigned long long dfactorial(int dn){
        if (dn == 1 || dn == 0){
            return 1;
        } 
        else {
            return dfactorial(dn - 2) * dn;
        }
    
}
/*long double connect(long double f, long double df, long double x, int n, long double del, long double sum, int verh){
    for (int n = 1; n <= verh; n++){
        del = (dfactorial(2 * n - 1) / factorial(n)) * pow(x, n + 1);
        sum = sum + del;
    }
    return sum + x;
}*/

long double sqr(long double x){
    long double znach = (x / sqrt(1 - 2 * x));
    return znach;
}
long double input_xtry(long double xtry){
    long double ogr = 0.5;
    printf("Введите x, который лежит в диапозоне: -0.5 <= x < 0.5\n");
    int n1 = scanf("%Lf", &xtry);
    if (n1 == 1){
        while (xtry <= -1 * ogr || xtry > ogr){
            if(n1 == 1){
                printf("Введенный Вами x не лежит в указанном диапазоне, попробуйте еще раз: ");
                scanf("%Lf", &xtry);
                printf("\n");
            }
            else
                break;
            }
    }
    return xtry;
}
int input_ntry(int ntry){
    long double ogr = 0.5;
    printf("Введите n, который лежит в диапозоне: 1 <= n\n");
    int n1 = scanf("%d", &ntry);
    if (n1 == 1){
        while (ntry < 1){
            if(n1 == 1){
                printf("Введенный Вами n не лежит в указанном диапазоне, попробуйте еще раз: ");
                scanf("%d", &ntry);
                printf("\n");
            }
            else
                break;
            }
    }
    return ntry;
}

long double test(int n, long double x){
    long double summa = 0;
    long double pred = x;
    for (int i = 1; i <= n; i++){
        summa = summa + pred;
        pred = pred * x * (2 * i - 1)/i;
        printf("summa = %.19Lf, n = %d\n", summa, i - 1);
    }
    return summa;
}