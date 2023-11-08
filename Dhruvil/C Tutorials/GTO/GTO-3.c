#include <stdio.h>

int main()
{
    int x = 5;
    int y;
    int z = 9;
    y = x++;
    z = ((x > y) || (z <= y));
    y--;
    printf("%d \n", y);
    printf("%d \n", z);
    return 0;
}
