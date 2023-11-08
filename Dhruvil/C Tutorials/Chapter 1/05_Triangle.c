#include <stdio.h>

int main()
{
    /*
    if 0.5 in formula then use double or float.
    if you use int then use formula (base*height)/2 .
    */
    double base = 20.20;
    double height = 10.10;
    printf("Area of the Triangle is : %lf \n", 0.5 * base * height);
    return 0;
}
