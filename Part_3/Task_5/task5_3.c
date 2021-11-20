#include <math.h>

int findFirstNegativeElement(double eps)
{
    double a;

    int i = 0;
    do
    {
        a = pow(-1, i) * pow(2, i + 1) / (pow(2, 2 * i) + 1);
        if ((a < 0) && (fabs(a) <= eps))
            return ++i;
        ++i;
    } while (1);
}
