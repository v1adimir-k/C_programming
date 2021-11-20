#include <math.h>

int findFirstElement(double eps)
{
    double a;

    int i = 0;
    while (1)
    {
        a = pow(-1, i) * pow(2, i + 1) / (pow(2, 2 * i) + 1);
        if (fabs(a) <= eps)
            break;
        ++i;
    }
    return ++i;
}
