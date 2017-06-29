#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x = 2.55;
    double y = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;

    printf("3x^3 - 5x^2 + 6 = %g\n", y);

    return 0;
}
