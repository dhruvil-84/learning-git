#include <stdio.h>

int main()
{
    printf("\nDecimal  Octal   Hexadecimal\n");
    for(int i = 1; i <= 25; i++)
    {
        printf("%d\t %o\t %x\n", i,i,i);
    }
    printf("\n");
    return 0;
}
