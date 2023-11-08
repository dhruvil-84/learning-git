#include <stdio.h>
// '.(point)' is also counted as a digit in c language.
int main()
{
    int num1, num2;
    printf("Enter a 2 digit and 5 digit number : \n");
    scanf("%2d %5d", &num1, &num2);
    printf("The numbers are %d and %d", num1, num2);
    float num3, num4;
    printf("\nEnter a 4 digit and 7 digit number : \n");
    scanf("%4f %7f", &num3, &num4);
    printf("The numbers are %2f and %4f", num3, num4);
    /*  formatting in output does not change the whole/integral part
        of the number, but formatting in output with '.2' , '.3' etc
        will change the fractional/decimal partof the number. */
    float num5, num6;
    printf("\nEnter a 4 digit and 7 digit number : \n");
    scanf("%4f %7f", &num5, &num6);
    printf("The numbers are %7.1f and %0.3f", num5, num6);
    /*  formatting in output does not change the whole/integral part
        of the number, but formatting in output with '.1' , '.3' etc
        will change the fractional/decimal part of the number. */
    float num7, num8;
    printf("\nEnter a 4 digit and 3 digit number : \n");
    scanf("%4f %3.3f", &num7, &num8);
    printf("The numbers are %f and %1.0f", num7, num8);
    /*  formatting in output does not change the whole/integral part
        of the number, but formatting in output with '.1' , '.3' etc
        will change the fractional/decimal part of the number. */
    return 0;
}
