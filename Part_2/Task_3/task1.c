#include <math.h>

_Bool isInArea(double x, double y)
{
    if ((sqrt(fabs(x) + fabs(y)) <= 1) || ((-1 <= x) && (x <= 0) && (-1 <= y) && (y <= 1)))
        return 1;
    else
        return 0;
}
