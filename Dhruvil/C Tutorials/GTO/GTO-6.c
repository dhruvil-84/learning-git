#include <stdio.h>

int main()
{
    printf("The Output is : \n");
    printf("%d", 2*(2 == ((sizeof((float)4))/2)));
    printf("\n%f", (0.5*(sizeof((int)6.000000))));
    return 0;
}
