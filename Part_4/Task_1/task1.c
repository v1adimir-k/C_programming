#include <stdio.h>
#include <math.h> 
#include <conio.h> 
#include <stdlib.h>
void f(const double *x, double *result) 
{

    *result = pow(((1 + (*x) + pow((*x), 2)) / (2 * (*x) + pow((*x), 2)) + 2 - (1 - (*x) - pow((*x), 2)) / (2 * (*x) - pow((*x), 2))), -1) * (5 - 2 * pow((*x), 2));
}
int main(void)
{
    double x,result;
    _Bool b = 1;
    while (b==1)
    {
     printf("Menu:\n");
    printf("1. Start\n");
    printf("2. End\n");
    printf("Select Task number: ");
    switch (_getch())
    {
    case '1':
    {
        printf("\nx = ");
        scanf("%lf", &x);
        f(&x,&result);
        printf("f = %.4lf\n\n", result);
        break;
    }
    case '2':
    {
        b = 0;
        break;
    }
    default:
    {
        printf("\nInvalid value entered. Try again.\n");;
        break;
    }
    }
    } 
    system("pause");
    return 0;
}
