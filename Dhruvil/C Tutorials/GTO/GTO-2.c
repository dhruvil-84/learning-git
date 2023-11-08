#include <stdio.h>

int main()
{
    int x = 5;
    int y;
    int z = 5;
    y = x == z;
    printf("%d \n", x);
    printf("%d \n", y);
    printf("%d \n", z);
    printf("\n");
    y = 5;
    z = 5;
    x = y != z;
    printf("%d \n", x);
    printf("%d \n", y);
    printf("%d \n", z);
    return 0;
}
