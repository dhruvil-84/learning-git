#include <stdio.h>

int main()
{
    int a; // Stores only integer values.
    float b; // Stores all the real values including 6 digits after decimal point.
    char c; // Stores  only single unit Character values.
    double d;  // Same as float but the range is higher than float.
    char string[] = "Hello Mr _c_o_d_e_i_t_"; // Stores words as well as Sentences.
    printf("Enter the character c : ");
    scanf("%c", &c); // here '&' stores the user inputted data in the given variable c.
    printf("Enter value of integer a : ");
    scanf("%d", &a); // Scanf function asks the user to take input from the user.
    printf("Enter value of real integer b : ");
    scanf("%f", &b); // '&' means 'address of' operator which stores the user inputted data in the given variable b.
    printf("Enter value of real double integer d : ");
    scanf("%lf", &d);  // here '&' stores the user inputted data in the given variable d.
    printf("The value of integer a is %d \n", a);
    printf("The value of real integer b is %f \n", b);
    printf("The character c is %c \n", c);
    printf("The value of real double integer d is %lf \n", d);
    printf("value of string is: %s\n", string);
    return 0;
}
