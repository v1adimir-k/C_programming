#include <stdio.h>

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
