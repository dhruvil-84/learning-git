// Swap two variables without using 3rd variable.
#include <stdio.h>

int main()
{
    int z;
    int x = 40;
    int y = 30;
    printf("X before swapping : %d\n", x);
    printf("Y before swapping : %d\n", y);
    z = x;
    x = y;
    y = z;
    printf("X after swapping : %d\n", x);
    printf("Y after swapping : %d\n", y);
    return 0;
}
