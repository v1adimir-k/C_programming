#include <math.h>
#include "func.h"

double x, result;

void f(void)
{
    result = round((1 - (2 * pow(sin(x), 2))) / (1 + sin(2 * x)) * 10000) / 10000;
}
