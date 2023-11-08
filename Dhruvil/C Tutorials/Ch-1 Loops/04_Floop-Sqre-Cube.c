#include <stdio.h>

int main()
{
    int i,n,sqre=0,cube=0;
    printf("Enter the number : \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sqre = sqre + (i*i);
        cube = cube + (i*i*i);
    }
    printf("The sum of Square of first %d Natural Numbers is = %d \n", n, sqre);
    printf("The sum of Cube of first %d Natural Numbers is = %d \n", n, cube);
    return 0;
}