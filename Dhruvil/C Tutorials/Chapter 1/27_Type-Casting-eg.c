#include <stdio.h>

int main()
{
    int num1 = 25, num2 = 12;
    int sum = num1 + num2;
    float avg;
    avg = sum/2; // avg without typecast. (37/2 = 18)
    printf("The Average is : %f \n", avg);
    avg = (float)sum/2; // avg with typecast on sum. (37.000000/2 = 18.500000)
    printf("The Average is : %f \n", avg);
    avg = (float)(sum/2); // avg with typecast on (sum/2). (37/2 = 18.000000)
    printf("The Average is : %f \n", avg);
    return 0;
}
