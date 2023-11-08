#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter value of a: \n");
    scanf("%d", &a);
    printf("Enter value of b: \n");
    scanf("%d", &b);
    printf("The Sum of a and b is : %d\n", a + b);
    printf("The Difference of a and b is : %d\n", a - b);
    printf("The Product of a and b is : %d\n", a * b);
    printf("The Division of a and b is : %d\n", a / b);
    printf("The remainder when a divided by b is : %d\n", a % b);
    return 0;
}
