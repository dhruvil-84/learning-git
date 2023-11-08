#include <stdio.h>
// pre increment decreament --> pehle add subtract --> then assign.
// post increment decreament --> pehle assign --> then add subtract.
/* NOTE : printf function will print assigned values if equated to a variable
          and the next operation will be continued from assigned values. */
int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d", &a);                        // a = 3 stored first.
    a = --a;                                // a = 3 decremented to a = 2 then assigned.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 2.
    a = --a;                                // a = 2 decremented to a = 1 then assigned.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 1.
    a = a--;                                // a = 1 assigned first then decreased to a = 0.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 1.
    // since next function continues from assigned value due to printf function so a = 1 not a = 0.
    a = --a;                                // a = 1 decremented to a = 0 then assigned.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 0.
    a = a--;                                // a = 0 assigned first then decreased to a = -1.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 0.
    // since next function continues from assigned value due to printf function so a = 0 not a = -1.
    a = a--;                               // a = 0 assigned first then decreased to a = -1.
    printf("Now Value of a is: %d \n", a); // it will print assigned value i.e a = 0.
    // since next function continues from assigned value due to printf function so a = 0 not a = -1.
    a = --a;                               // a = 0 decremented to a = -1 then assigned.
    printf("Now Value of a is: %d \n", a); // it will print assigned value i.e a = -1.
    // NOTE: printf function will print assigned values if equated to a variable.
    return 0;
}
