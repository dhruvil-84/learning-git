#include <stdio.h>
// pre increment / decreament --> pehle add / subtract --> then assign.
// post increment / decreament --> pehle assign --> then add / subtract.
// NOTE : since there is no assignment operator, but directly printed it will pre/post increament.
int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d", &a);                          // a = 10 stored first.                                      
    printf("Now Value of a is : %d \n", ++a); // a = 10 pre incremented to a = 11 and will print 11.                                          
    printf("Now Value of a is : %d \n", ++a); // a = 11 pre incremented to a = 12 and will print 12.                                             
    printf("Now Value of a is : %d \n", a++); // a = 12 post incremented to a = 13 and will print 12.                                           
    printf("Now Value of a is : %d \n", ++a); // a = 13 pre incremented to a = 14 and will print 14.                                           
    printf("Now Value of a is : %d \n", a++); // a = 14 post incremented to a = 15 and will print 14.                                          
    printf("Now Value of a is : %d \n", a++); // a = 15 post incremented to a = 16 and will print 15.                                          
    printf("Now Value of a is : %d \n", ++a); // a = 16 pre incremented to a = 17 and will print 17.
    // NOTE : printf function will print assigned values if equated to a variable.
    return 0;
}
// pre increment mein pehle value increase hui and a ki jagah overwrite ho gai and print hui.
// post increment mein pehle value print hui and baad mein increase and overwrite hui.
// in case of pre increament the value is first increased by 1 and then over written on itself and then printed.
// in case of post increament the value is first printed and then increased by 1 and then over written on itself.
