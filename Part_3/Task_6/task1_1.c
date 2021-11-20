#include <math.h>

double summ(int n)
{
    double res = 0;

    for (int i = 0; i < n; ++i)
    {
        res += pow(-1, i) * pow(2, i + 1) / (pow(2, 2 * i) + 1);
    }
    return res;
}
