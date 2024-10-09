#include <stdio.h>
#include "fun.h"
#include <ctype.h>

int input_ntry(int *ntry){
    int sostn = 0;
    int zahod = 0;
    int a;
    int kol = 0;
    printf("Введите n, который лежит в диапозоне: 1 <= n: ");
    while (*ntry < 1 || zahod == 0){
        *ntry = (long double) *ntry;
        zahod = 1;
        int c = scanf("%d", &*ntry);
        if (c == EOF && a != EOF){//EOF
                sostn = 3;
                *ntry = -100;
                printf("%d\n", sostn);
                printf("Введенный Вами n не лежит в указанном диапазоне, попробуйте еще раз: ");
        }
        while ((a = getchar()) != '\n' && a != EOF){
            if(a < 48 || a > 57){
                kol = kol + 1;
            }
            printf("%d-----%d\n", a, kol);
        }
        if (c == 0){//некорректный ввод
                sostn = 1;
                *ntry = -100;
                printf("%d\n", sostn);
                printf("Введенный Вами n не лежит в указанном диапазоне, попробуйте еще раз: ");
        }
                
        if (*ntry >= 1){//корректный ввод
            sostn = 0;
            if (kol != 0){
                sostn = 3;
                *ntry = -100;
            }
        }      
        if ((*ntry < 1) && c == 1){//значения не из диапазона
                sostn = 2;
                *ntry = -100;
                printf("%d\n", sostn);
                printf("Введенный Вами n не лежит в указанном диапазоне, попробуйте еще раз: ");
        }
        kol = 0;
    }
    return sostn;
}
