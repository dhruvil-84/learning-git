#include <stdio.h>
#define TSA(x) (6*x*x) // Total Surface Area.
#define vol(x) (x*x*x) // Volume.

int main()
{
    float side;
    printf("Enter the side : ");
    scanf("%f", &side);
    printf("The Surface area of cube is : %f \n", TSA(side));
    printf("The Volume of cube is : %f \n", vol(side));
    return 0;
}
