#include <stdio.h>

int main()
{
    printf("%d \n", 456);
    printf("%2d \n", 456);
    printf("%6d \n", 456);
    printf("%06d \n", 456);
    printf("%+6d \n", 456);
    printf("%-6d \n", 456);
    printf("%#6o \n", 456);
    printf("%#6x \n", 456);
    printf("%f \n", 45.6827);
    printf("%1.2f \n", 45.6827);
    printf("%7.2f \n", 45.6827);
    printf("%-7.2f \n", 45.6827);
    printf("%#7.2o \n", 45.6827);
    printf("%#7.2x \n", 45.6827);
    printf("%7.2e \n", 45.6827);
    printf("%-7.2e \n", 45.6827);
    printf("%e \n", 45.6827);
    return 0;
}
