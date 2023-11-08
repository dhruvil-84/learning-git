#include <stdio.h>

int main()
{
    int a = 45;
    int b = 98;
    int c = 72;
    printf("%d \n", (a < b || c == 5));
    printf("%d \n", (c < b || b > a) && (c != 12));
    printf("%d \n", !(!(5 < 3)));
    return 0;
}
