#include <stdio.h>

_Bool isInArea(double x, double y);
double f(double x);

int main(void)
{
    double x, y;

    printf("Выберите, что посчитать: Задание 1 (1) или Задание 2 (2):\n>>> ");
    switch (getchar())
    {
        case '1':
            printf("\nВведите через пробел два числа, чтобы определить: попадает точка в заданную "
                "область или нет:\n>>> ");
            scanf("%lf%lf", &x, &y);
            if (isInArea(x, y))
                printf("Ответ: попадает");
            else
                printf("Ответ: не попадает");
            break;
        case '2':
            printf("\nВведите значение числа x:\n>>> ");
            scanf("%lf", &x);
            printf("Результат: %g", f(x));
            break;
        default:
            printf("Hету такого варианта");
    }
    printf("\n\nНажмите Enter чтобы выйти...");
    getchar(); getchar();
    return 0;
}
