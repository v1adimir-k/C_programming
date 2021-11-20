#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
    for (int i = 0; i < n; ++i)
    {
        if (k > 0 && !((i + 1) % k))
            continue;
        printf("%g\n", pow(-1, i) * pow(2, i + 1) / (pow(2, 2 * i) + 1));
    }
}
