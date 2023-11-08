#include <stdio.h>
#define pi 3.1415 // here I declared pi as a preprocessor directive.

int main()
{
    float radius;
    printf("Enter the value of Radius : \n");
    scanf("%f", &radius);
    printf("The Circumference of Circle is : %f \n", pi * 2 * radius);
    printf("The Area of Circle is : %f \n", pi * radius * radius);
    return 0;
}
