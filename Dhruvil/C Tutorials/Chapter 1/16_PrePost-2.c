#include <stdio.h>
// pre increment decreament --> pehle add / subtract --> then assign.
// post increment decreament --> pehle assign --> then add subtract.
// NOTE: since there is no assignment operator, it will just increment no pre/post increament.
int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d", &a);                        // a = 10 stored first.
    ++a;                                    // a = 10 incremented to a = 11 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 11.
    ++a;                                    // a = 11 incremented to a = 12 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 12.
    a++;                                    // a = 12 incremented to a = 13 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 13.
    ++a;                                    // a = 13 incremented to a = 14 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 14.
    a++;                                    // a = 14 incremented to a = 15 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 15.
    a++;                                    // a = 15 incremented to a = 16 and over written on a.
    printf("Now Value of a is : %d\n", a);  // it will print assigned value i.e a = 16.
    ++a;                                    // a = 16 incremented to a = 17 and over written on a.
    printf("Now Value of a is : %d \n", a); // it will print assigned value i.e a = 17.
    // NOTE: printf function will print assigned values if equated to a variable.
    return 0;
}
