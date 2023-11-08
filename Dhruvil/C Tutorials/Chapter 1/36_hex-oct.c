#include <stdio.h>
// decimal to hexadecimal and octal.
int main()
{
    int number;
    printf("Give the decimal number : ");
    scanf("%d", &number);
    printf("Decimal Number = %d\n", number);
    printf("Octal Number = %o\n", number);
    printf("Hexadecimal Number = %x\n", number);
    return 0;
}

