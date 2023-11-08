#include <stdio.h>
// pre increment / decreament --> pehle add / subtract --> then assign.
// post increment / decreament --> pehle assign --> then add / subtract.
// NOTE : since there is no assignment operator, but directly printed it will pre/post decreament.
int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d", &a);                          // a = 3 stored first.                                      
    printf("Now Value of a is : %d \n", --a); // a = 3 pre decremented to a = 2 and will print 2.                                          
    printf("Now Value of a is : %d \n", --a); // a = 2 pre decremented to a = 1 and will print 1.                                             
    printf("Now Value of a is : %d \n", a--); // a = 1 post decremented to a = 0 and will print 1.                                           
    printf("Now Value of a is : %d \n", --a); // a = 0 pre decremented to a = -1 and will print -1.                                           
    printf("Now Value of a is : %d \n", a--); // a = -1 post decremented to a = -2 and will print -1.                                          
    printf("Now Value of a is : %d \n", a--); // a = -2 post decremented to a = -3 and will print -2.                                          
    printf("Now Value of a is : %d \n", --a); // a = -3 pre decremented to a = -4 and will print -4.
    // NOTE : printf function will print assigned values if equated to a variable.
    return 0;
}
// pre decrement mein pehle value decrease hui and a ki jagah overwrite ho gai and print hui.
// post decrement mein pehle value print hui and baad mein decrease and overwrite hui.
// in case of pre decreament the value is first decreased by 1 and then over written on itself and then printed.
// in case of post decreament the value is first printed and then decreased by 1 and then over written on itself.
