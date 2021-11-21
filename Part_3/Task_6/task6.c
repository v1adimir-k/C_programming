#include <stdio.h>
#include "task6.h"

int main()
{
    int n, k, ch;
    double eps;

    while (1)
    {
        printf("Выберете один из вариантов:\n");
        for (int i = 1; i < 6; ++i)
            printf("%d. Задание %d\n", i, i);
        printf("6. Выход\n>>> ");
        ch = getchar();
        printf("\e[1;1H\e[2J");
        switch (ch)
        {
            case '1':
                printf("Введите значение n:\n>>> ");
                scanf("%d", &n);
                printf("Ответ: %g", summ(n));
                break;
            case '2':
                printf("Введите значение eps:\n>>> ");
                scanf("%lf", &eps);
                printf("Ответ: %g", summ2(eps));
                break;
            case '3':
                printf("Введите значения n и k через пробел:\n>>> ");
                scanf("%d%d", &n, &k);
                printf("Ответ:\n");
                print(n, k);
                break;
            case '4':
                printf("Введите значение eps:\n>>> ");
                scanf("%lf", &eps);
                printf("Ответ: %d", findFirstElement(eps));
                break;
            case '5':
                printf("Введите значение eps:\n>>> ");
                scanf("%lf", &eps);
                printf("Ответ: %d", findFirstNegativeElement(eps));
                break;
            case '6':
                return 0;
            default:
                printf("Нету такого варианта");
        }
        getchar();
        printf("\n\nНажмите Enter для перехода в меню...");
        getchar();
        printf("\e[1;1H\e[2J");
    }
}
