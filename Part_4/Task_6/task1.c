#include <math.h> 
void f(const double *x, double *result) 
{
    *result = pow(((1 + (*x) + pow((*x), 2)) / (2 * (*x) + pow((*x), 2)) + 2 - (1 - (*x) - pow((*x), 2)) / (2 * (*x) - pow((*x), 2))), -1) * (5 - 2 * pow((*x), 2));
}
