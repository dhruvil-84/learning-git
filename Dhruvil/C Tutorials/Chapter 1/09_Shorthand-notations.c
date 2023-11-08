#include <stdio.h>
#include <conio.h>

int shorthand();
void main()
{
    int a; // This 'a' is different from shorthand function's 'a'.
    printf("Enter the int value of a : \n");
    scanf("%d", &a);
    a += 10; // a = a + 10 ---> 13 + 10 = 23
    printf("The Sum of a and 10 is : %d \n", a);
    a -= 10; // a = a - 10 ---> 23 - 10 = 13
    printf("The Difference of a and 10 is : %d \n", a);
    a *= 10; // a = a * 10 ---> 13 * 10 = 130
    printf("The Product of a and 10 is : %d \n", a);
    a /= 10; // a = a / 10 ---> 130 / 10 = 13
    printf("The Quotient of a and 10 is : %d \n", a);
    a %= 10; // a = a % 10 ---> 13 % 10 = 3
    printf("The Remainder of a and 10 is : %d \n", a);
    printf("\n");
    shorthand();
    getch();
}
int shorthand()
{
    float a; // This 'a' is different from main function's 'a'.
    printf("Enter the float value of a : \n");
    scanf("%f", &a);
    a += 10; // a = a + 10 ---> 90.10 + 10 = 100.10
    printf("The Sum of a and 10 is : %f \n", a);
    a -= 10; // a = a - 10 ---> 100.10 - 10 = 90.10
    printf("The Difference of a and 10 is : %f \n", a);
    a *= 10; // a = a * 10 ---> 90.10 * 10 = 901.0
    printf("The Product of a and 10 is : %f \n", a);
    a /= 10; // a = a / 10 ---> 901.0 / 10 = 90.10
    printf("The Quotient of a and 10 is : %f \n", a);
    return 0;
    // modulus cannot be used in case of float values and so 
    // shorthand '%' Modulus operator cannot be used in float values.
}