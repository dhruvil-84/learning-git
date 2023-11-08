#include <stdio.h>

int main()
{
    int a = 10;
    a = a++; // a = 10 assigned first then added to a = 11.
    printf("Now the value of a is : %d \n", a); // will print a = 10.
    a++; //  a = 10 incremented to a = 11.
    printf("Now the value of a is : %d \n", a); // will print a = 11.
    a = 10;
    a = ++a; // a = 10 added to a = 11 and assigned.
    printf("Now the value of a is : %d \n", a); // will print a = 11.
    ++a, //  a = 11 incremented to a = 12.
    printf("Now the value of a is : %d \n", a); // will print a = 12.
    // Now for Decerment.
    a = 10;
    a = a--; // a = 10 assigned first then decreased to a = 9.
    printf("Now the value of a is : %d \n", a); // will print a = 10.
    a--; //  a = 10 decremented to a = 9.
    printf("Now the value of a is : %d \n", a); // will print a = 9.
    a = 10;
    a = --a; // a = 10 decreased to a = 9 and assigned.
    printf("Now the value of a is : %d \n", a); // will print a = 9.
    --a, //  a = 9 decremented to a = 8.
    printf("Now the value of a is : %d \n", a); // will print a = 8.
    return 0;
}
