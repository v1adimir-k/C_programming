#include <stdio.h>
#include <math.h>

double f(double x);

void main(void)
{
    double x;

    printf("f(1) = %g\n\n", f(1));
    printf("Input your x value: ");
    scanf("%lf", &x);
    printf("f(%g) = %g\n\nPress Enter to exit...", x, f(x));
    getchar(); getchar();
}

double f(double x)
{
    return round((1 - (2 * pow(sin(x), 2))) / (1 + sin(2 * x)) * 10000) / 10000;
}
