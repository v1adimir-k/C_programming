#include <stdio.h>
#include <math.h>

void f(void);

double x = 1;
double result;

void main(void)
{
    f();
    printf("f(1) = %g\n\n", result);
    printf("Input your x value: ");
    scanf("%lf", &x);
    f();
    printf("f(%g) = %g\n\nPress Enter to exit...", x, result);
    getchar(); getchar();
}

void f(void)
{
    result = round((1 - (2 * pow(sin(x), 2))) / (1 + sin(2 * x)) * 10000) / 10000;
}
