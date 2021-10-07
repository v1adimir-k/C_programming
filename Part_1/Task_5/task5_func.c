#include <math.h>

double f(double x)
{
    return round((1 - (2 * pow(sin(x), 2))) / (1 + sin(2 * x)) * 10000) / 10000;
}
