#include <stdio.h>
// pre increment decreament --> pehle add subtract --> then assign.
// post increment decreament --> pehle assign --> then add subtract.
/* NOTE : printf function will print assigned values if equated to a variable
          and the next operation will be continued from assigned values. */
int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d", &a);                        // a = 10 stored first.
    a = ++a;                                // a = 10 incremented to a = 11 then assigned.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 11.
    a = ++a;                                // a = 11 incremented to a = 12 then assigned.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 12.
    a = a++;                                // a = 12 assigned first then added to a = 13.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 12.
    // since next function continues from assigned value due to printf function so a = 12 not a = 13.
    a = ++a;                                // a = 12 incremented to a = 13 then assigned.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 13.
    a = a++;                                // a = 13 assigned first then added to a = 14.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 13.
    // since next function continues from assigned value due to printf function so a = 13 not a = 14.
    a = a++;                               // a = 13 assigned first then added to a = 14.
    printf("Now Value of a is: %d \n", a); // it will print assigned value i.e a = 13.
    // since next function continues from assigned value due to printf function so a = 13 not a = 14.
    a = ++a;                               // a = 13 incremented to a = 14 then assigned.
    printf("Now Value of a is: %d \n", a); // it will print assigned value i.e a = 14.
    // NOTE: printf function will print assigned values if equated to a variable.
    return 0;
}
