#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter value of x and y : \n");
    scanf("%f %f", &x, &y);
    printf("Square root of %f is : %f \n", x, sqrt(x));
    printf("Square root of %f is : %f \n", y, sqrt(y));
    printf("%f to the power of %f is : %f \n", x, y, pow(x,y));
    printf("%f to the power of %f is : %f \n", y, x, pow(y,x));
    printf("%f to the power of %f is : %f \n", x, x, pow(x,x));
    printf("%f to the power of %f is : %f \n", y, y, pow(y,y));
    printf("%f rounded up to nearest integer is : %f \n", x, ceil(x));
    printf("%f rounded down to nearest integer is : %f \n", y, floor(y));
    printf("absolute value of %f and %f is : %f and %f \n", x, y, fabs(x), fabs(y));
    printf("e to power of %f is : %f \n", y, exp(y));
    printf("remainder of %f / %f is : %f \n", x, y, fmod(x,y));
    printf("natural log of %f is : %f \n", x, log(x));
    printf("base10 log of %f is : %f \n", y, log10(y));
    // Similarly trigo functions can also be done.
    return 0;
}
