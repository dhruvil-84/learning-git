#include <stdio.h>

int main()
{
    int i,n,j;
    printf("Enter the number : \n");
    scanf("%d", &n);
    printf("The Pyramid is : \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}