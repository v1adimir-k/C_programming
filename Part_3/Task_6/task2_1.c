#include <math.h>

double summ2(double eps)
{
    double res = 0;
    double a = pow(-1, 0) * pow(2, 0 + 1) / (pow(2, 2 * 0) + 1);

    for (int i = 1; fabs(a) > eps; ++i)
    {
        res += a;
        a = pow(-1, i) * pow(2, i + 1) / (pow(2, 2 * i) + 1);
    }
    return res;
}
