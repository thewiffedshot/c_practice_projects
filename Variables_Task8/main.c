#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i1 = 365, i2 = 12258, i3 = 996;
    int j1 = 7,   j2 = 23,    j3 = 4;

    printf("First result: %i; Second result: %i; Third result: %i\n",
           i1 + j1 - i1 % j1, i2 + j2 - i2 % j2, i3 + j3 - i3 % j3);

    return 0;
}
