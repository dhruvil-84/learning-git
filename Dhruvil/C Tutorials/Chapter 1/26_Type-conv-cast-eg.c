#include <stdio.h>

int main()
{
// Type Conversion is by default IMPLICIT.
// Type Conversion is automatic.
    int i = 11;
    float f = 4.32;
    double d = 26.278;
    printf("The Value is : %d \n", i * f + d / 10); // type conversion.
    printf("The Value is : %f \n", i * f + d / 10); // type conversion.
    printf("The Value is : %lf \n", i * f + d / 10); // type conversion.
// since it is implicit the final value is in double data type.
// so in 1st print statement it will print its extreme value.
    printf("The Value is : %d \n", i * (int)f + (int)d / 10); // demoting type casting.
/* We did type casting in 1st print statement to demote variable f & 
d into int data type from float and double data type respectively */
// now in 1st print statement it will print its int value.
    return 0;
}
