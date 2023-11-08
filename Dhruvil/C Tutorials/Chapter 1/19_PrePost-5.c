#include <stdio.h>
// pre increment decreament --> pehle add / subtract --> then assign.
// post increment decreament --> pehle assign --> then add subtract.
// NOTE: since there is no assignment operator, it will just decrement no pre/post decrement.
int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d", &a);                        // a = 3 stored first.
    --a;                                    // a = 3 decremented to a = 2 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 2.
    --a;                                    // a = 2 decremented to a = 1 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 1.
    a--;                                    // a = 1 decremented to a = 0 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 0.
    --a;                                    // a = 0 decremented to a = -1 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = -1.
    a--;                                    // a = -1 decremented to a = -2 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = -2.
    a--;                                    // a = -2 decremented to a = -3 and over written on a.
    printf("Now Value of a is : %d\n", a);  // it will print assigned value i.e a = -3.
    --a;                                    // a = -3 decremented to a = -4 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = -4.
    // NOTE: printf function will print assigned values if equated to a variable.
    return 0;
}
