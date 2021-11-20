#include <math.h>

double summ2(double eps)
{
    double res = 0;
    double a = 0;

    int i = 0;
    do
    {
        res += a;
        a = pow(-1, i) * pow(2, i + 1) / (pow(2, 2 * i) + 1);
        ++i;
    } while (fabs(a) > eps);
    return res;
}
