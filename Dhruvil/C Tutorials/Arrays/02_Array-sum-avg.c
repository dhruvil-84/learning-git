#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    int a[10];
    printf("Enter value of n (not more than 10) : ");
    scanf("%d", &n);
    printf("enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("The Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("The Sum of Array elements is %d \n", sum);
    printf("The Average of Array elements is %d \n", sum/n);
    return 0;
}