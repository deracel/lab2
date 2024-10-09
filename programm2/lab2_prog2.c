#include <stdio.h>
#include <math.h>
#include <limits.h>

unsigned long long factorial(int nom);
unsigned long long dfactorial(int dnom);
long double connect(unsigned long long f, unsigned long long df, long double x, int *nom, long double del, long double sum, int verh, long double e);
long double sqr(long double x);
long double input_xtry(long double xtry);
long double input_etry(long double etry);

int main(){
    long double sum = 0;
    long double del = 0;
    long double ogr = 0.5;
    long double xtry = 0;
    long double etry = 0;
    int nom = 1;
    long double x = input_xtry(xtry);
    long double e = input_etry(etry);
    int verh = nom; //верхний порядковый номер последовательности
    int dnom = 2 * nom - 1;
    unsigned long long f = factorial(nom);
    unsigned long long df = dfactorial(dnom); 
    printf("factorial %llu\n", f);
    printf("dfactorial %llu\n\n", df);
    long double c = connect(f, df, x, &nom, del, sum, verh, e);
    long double root = sqr(x);
    printf("\n");
    printf("Вывод n - %d\n", nom);
    printf("Через формулу с корнем  %.15Lf\n", root);
    printf("Разложенем в ряд        %.15Lf\n", c);
    return 0;
}
unsigned long long factorial(int nom){
    if (nom == 1){
        return 1;
    }
    else{
        return factorial(nom - 1) * nom;
    }
}
unsigned long long dfactorial(int dnom){
        if (dnom == 1 || dnom == 0){
            return 1;
        } 
        else 
            return dfactorial(dnom - 2) * dnom;
}
long double connect(unsigned long long f, unsigned long long df, long double x, int *nom, long double del, long double sum, int verh, long double e){
    
    long double sumprosh = 0;
    long double summa = 0;
    long double pred = x;
    int i = 1;
    while (summa - pred > e || summa == 0){
        /*if (sum - sumprosh > e || sumprosh == 0){
            printf("цикл начался при n = %d\n", n);
            del = (dfactorial(2 * n - 1) / factorial(n)) * pow(x, n + 1);
            sumprosh = sum;
            sum = sum + del;
            *nom = n;*/
            summa = summa + pred;
            pred = pred * x * (2 * i - 1)/i;
            i = ++i;
    }       
            /*sum = sum + x;
            return sum;*/
            return summa + x;
}
long double sqr(long double x){
    long double znach = (x / sqrt(1 - 2 * x));
    return znach;
}

long double input_etry(long double etry){
    long double ogr = 0.5;
    printf("Введите точность e > 0\n");
    scanf("%Lf", &etry);
    while (etry <= 0 || getchar() != '\n'){
            printf("Введенная Вами точность e не лежит в указанном диапазоне, попробуйте еще раз: ");
            while (getchar() != '\n'){
                ;
            }
            scanf("%Lf", &etry);
            printf("\n");
        }
    return etry;
}

long double input_xtry(long double xtry){
    long double ogr = 0.5;
    printf("Введите x, который лежит в диапозоне: -0.5 <= x < 0.5\n");
    scanf("%Lf", &xtry);
    while (xtry <= -1 * ogr || xtry > ogr || getchar() != '\n'){
            printf("Введенный Вами x не лежит в указанном диапазоне, попробуйте еще раз: ");
            while (getchar() != '\n'){
                ;
            }
            scanf("%Lf", &xtry);
            printf("\n");
        }
    return xtry;
}