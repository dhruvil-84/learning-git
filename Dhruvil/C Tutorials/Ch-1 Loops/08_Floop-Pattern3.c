#include <stdio.h>

int main()
{
    int i,n,j;
    char c = '*';
    printf("Enter the number : \n");
    scanf("%d", &n);
    printf("The Odd Pyramid is : \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    return 0;
}