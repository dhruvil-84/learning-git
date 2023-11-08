#include <stdio.h>

int main()
{
    int soln;
    soln = (sizeof(2.4*((int)65-(char)65))/sizeof((float)100)*1.2);
    printf("%04d", sizeof(float)%3);
    printf("%1.3f", (float)soln);
    printf("\n%f",8/4.8);
    return 0;
}
