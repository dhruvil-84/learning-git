#include <stdio.h>

int main()
{
    int a, b;
    float m, d;
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);
    // This bitwise operator shifts all the elements to left side by 1 digit.
    m = b << 1; // 11 = 1011 --> left shift make it 10110 = 22.
    // This bitwise operator shifts binary digits to right side by 1.
    d = a >> 1; // 22 = 10110 --> right shift make it 01011 --> 1011 = 22.
    printf("The multiplication of %d with 2 is : %f \n", b, m);
    printf("The division of %d by 2 is : %f \n", a, d);
    return 0;
}
