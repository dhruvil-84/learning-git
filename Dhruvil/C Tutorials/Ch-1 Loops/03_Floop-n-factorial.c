#include <stdio.h>

int main()
{
    int i,n,factorial=1;
    printf("Enter the number : \n");
    scanf("%d", &n);
    if(n<0)
    {
        printf("The Number entered is -ve \n");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            factorial = factorial * i;
        }
    }
    printf("%d! is = %d ", n, factorial);
    return 0;
}