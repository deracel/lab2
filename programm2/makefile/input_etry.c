#include "fun.h"
#include <stdio.h>

long double input_etry(long double *etry){
    int soste = 0;
    int zahod = 0;
    int a;
    int kol = 0;
    printf("Введите точность e > 0: ");
    while (*etry <= 0 || zahod == 0){
        zahod = 1;
        int c = scanf("%Lf", &*etry);
        if (c == EOF & a != EOF){//EOF
            soste = 3;
            *etry = -100;
            printf("%d\n", soste);
            printf("Введенный Вами e не лежит в указанном диапазоне, попробуйте еще раз: ");
        }
        while ((a = getchar()) != '\n' && a != EOF){
                if(a < 48 || a > 57){
                    kol = kol + 1;
                }
                printf("%d-----%d\n", a, kol);
        }
        if (c == 1 && (*etry > 0)){//корректный ввод
                soste = 0;
                if (kol != 0){
                    soste = 3;
                    *etry = -100;
                }
            }  
            if (c == 0){//некорректный ввод
                soste = 1;
                *etry = -100;
                printf("%d\n", soste);
                printf("Введенный Вами e не лежит в указанном диапазоне, попробуйте еще раз: ");
            }       
            if ((*etry <= 0) && c == 1){//значения не из диапазона
                soste = 2;
                *etry = -100;
                printf("%d\n", soste);
                printf("Введенный Вами e не лежит в указанном диапазоне, попробуйте еще раз: ");
            }
            kol = 0;
    }
    return soste;
}
