#include <stdio.h>

void f(void);

double x, result;

void main(void)
{
    x = 1;
    f();
    printf("f(1) = %g\n\n", result);
    printf("Input your x value: ");
    scanf("%lf", &x);
    f();
    printf("f(%g) = %g\n\nPress Enter to exit...", x, result);
    getchar(); getchar();
}
