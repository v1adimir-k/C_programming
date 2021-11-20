#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
    int i = 0;
    while (i < n)
    {
        if (k > 0 && !((i + 1) % k))
        {
            ++i;
            continue;
        }
        printf("%g\n", pow(-1, i) * pow(2, i + 1) / (pow(2, 2 * i) + 1));
        ++i;
    }
}
