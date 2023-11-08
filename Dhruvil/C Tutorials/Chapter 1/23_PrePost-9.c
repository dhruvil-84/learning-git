#include <stdio.h>

int main()
{
    int a = 10,b = 5, c, d, e, f, g;
    printf("The value of a before operation is : %d \n", a);
    c = a++ + 20; // a = 11, c = 10 + 20 = 30.
    printf("Now Value of a & c is : %d %d \n", a, c);
    a = 10,
    d = ++a + 20; // a = 11, d = 11 + 20 = 31.
    printf("Now Value of a & d is : %d %d \n", a, d);
    a = 10,
    e = b++ * 20; // b = 6, e = 5 * 20 = 100.
    printf("Now Value of b & e is : %d %d \n", b, e);
    a = 10;
    f = ++a / 4; // a = 11, f = 11 / 4 = 2.
    printf("Now Value of a & f is : %d %d \n", a, f);
    a = 10;
    g = a++ % 3; // a = 11, g = 10 % 3 = 1.
    printf("Now Value of a & g is : %d %d \n", a, g);
    return 0;
}
// here in case 2 the increment/decrement operators are in arithmetic operations with a constant.
