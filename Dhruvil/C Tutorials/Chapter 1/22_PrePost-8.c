#include <stdio.h>

int main()
{
    int a = 10, b = 3, c = 5;
    printf("The value of a, b, & c before operation is : %d %d %d \n", a, b, c);
    c = a-- + b++;             // a = 9, b = 4, c = 10 + 3 = 13.
    printf("Now Value of a, b, & c is :  %d %d %d \n", a, b, c);
    a = 10, b = 3, c = 5;
    c = (a--) + (b++);         // a = 9, b = 4, c = 10 + 3 = 13.
    printf("Now Value of a, b, & c is :  %d %d %d \n", a, b, c);
    a = 10, b = 3, c = 5;
    c = ((a--) + (b++));       // a = 9, b = 4, c = 10 + 3 = 13.
    printf("Now Value of a, b, & c is :  %d %d %d \n", a, b, c);
    a = 10, b = 3, c = 5;
    c = --a + ++b;             // a = 9, b = 4, c = 9 + 4 = 13.
    printf("Now Value of a, b, & c is :  %d %d %d \n", a, b, c);
    a = 10, b = 3, c = 5;
    c = (--a) + (++b);         // a = 9, b = 4, c = 9 + 4 = 13.
    printf("Now Value of a, b, & c is :  %d %d %d \n", a, b, c);
    a = 10, b = 3, c = 5;
    c = ((--a) + (++b));       // a = 9, b = 4, c = 9 + 4 = 13.
    printf("Now Value of a, b, & c is :  %d %d %d \n", a, b, c);
    return 0;
}
// here in case 1 the increment/decrement operators are in arithmetic operations with another increment/decrement operator.
