#include <math.h>

double summ(int n)
{
    double res = 0;

    int i = 0;
    do
    {
        res += pow(-1, i) * pow(2, i + 1) / (pow(2, 2 * i) + 1);
        ++i;
    } while (i < n);
    return res;
}
