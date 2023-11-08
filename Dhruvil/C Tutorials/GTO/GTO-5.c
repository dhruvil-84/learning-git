#include <stdio.h>

int main()
{
    int a = 0, b = 5, c = 9, d, e, f;
    d = --a - (c++);
    printf("The value of d is : %d \n", d);
    printf("The value of c is : %d \n", c);
    e = ++b * 10 / --b;
    printf("The value of e is : %d \n", e);
    f = (++c - 1 / -a) % 1;
    printf("The value of a is : %d \n", a);
    printf("The value of f is : %d \n", f);
    return 0;
}
