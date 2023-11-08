#include <stdio.h>

int main()
{
    int i,n,sqre,cube;
    printf("Enter the number : \n");
    scanf("%d", &n);
    printf("The Number, Square and its Cube is : \n");
    for(i=1;i<=n;i++)
    {
        sqre = i*i;
        cube = i*i*i;
        printf("%d   %d   %d \n", i, sqre, cube);
    }
    return 0;
}