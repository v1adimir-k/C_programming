#include <stdio.h>
#include <math.h>

void main(void)
{
    float x;

    x = 1;
    printf("f(1) = %g\n\n", round((1 - (2 * pow(sin(x), 2))) / (1 + sin(2 * x)) * 10000) / 10000);

    printf("Input your x value: ");
    scanf("%f", &x);
    printf("f(%g) = %g\n\nPress Enter to exit...", x, 
        round((1 - (2 * pow(sin(x), 2))) / (1 + sin(2 * x)) * 10000) / 10000);
    getchar(); getchar();
}
