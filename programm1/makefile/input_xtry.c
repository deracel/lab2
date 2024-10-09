#include <stdio.h>
#include "fun.h"

long double input_xtry(long double *xtry){
    long double ogr = 0.5;
    int sostx = 0;
    int zahod = 0;
    int a;
    int kol = 0;
    printf("Введите x, который лежит в диапозоне: -0.5 <= x < 0.5: ");
    while (*xtry < -1 * ogr || *xtry >= ogr || zahod == 0){
            zahod = 1;
            int c = scanf("%Lf", &*xtry);
            if (c == EOF && a != EOF){//EOF
                sostx = 3;
                *xtry = 100;
                printf("%d\n", sostx);
                printf("Введенный Вами x не лежит в указанном диапазоне, попробуйте еще раз: ");
                c = 2;
            }
            while ((a = getchar()) != '\n' && a != EOF){
                if((a < 48 || a > 57) && a != -1){
                    kol = kol + 1;
                }
            printf("%d-----%d\n", a, kol);
            }   
            if (*xtry >= -1 * ogr && *xtry < ogr){//корректный ввод
                sostx = 0;
                if (kol != 0){
                    sostx = 3;
                    *xtry = -100;
                }
            }  
            if (c == 0){//некорректный ввод
                sostx = 1;
                *xtry = 100;
                printf("%d\n", sostx);
                printf("Введенный Вами x не лежит в указанном диапазоне, попробуйте еще раз: ");
            }       
            if ((*xtry < -1 * ogr || *xtry >= ogr) && c == 1){//значения не из диапазона
                sostx = 2;
                *xtry = 100;
                printf("%d\n", sostx);
                printf("Введенный Вами x не лежит в указанном диапазоне, попробуйте еще раз: ");
            }
            kol = 0;
            
    }
    return sostx;
}