#include <stdio.h>

int main()
{
    int a;
    printf("\n%d",(int)65);
    printf("\n%d",(char)65);
    printf("\n%d",((int)65-(char)65));
    printf("\n%d",(2.4*((int)65-(char)65)));
    printf("\n%d",sizeof(2.4*((int)65-(char)65)));
    printf("\n%d",sizeof(2.4*0)); // sizeof(double) = 8
    // 2.4 is double here sor 2.4*0 = 0.0 is also double.
    printf("\n%f",(float)100);
    printf("\n%f",((float)100)*1.2);
    printf("\n%f",sizeof((float)100)*1.2);
    a = (sizeof(2.4*((int)65-(char)65))/sizeof((float)100)*1.2);
    printf("\n%1.3f",(float)a);
    return 0;
}
