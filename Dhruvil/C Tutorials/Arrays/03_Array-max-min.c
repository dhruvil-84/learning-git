#include <stdio.h>

int main()
{
    int i,n,max,min;
    int a[100];
    printf("Enter the Array size : ");
    scanf("%d", &n);
    printf("Enter the array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for(i=1;i<n;i++)
    {
        if(max < a[i])
        max = a[i];
        if(min > a[i])
        min = a[i];
    }
    printf("The Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("The Max no. is %d and Min no. is %d \n", max, min);
    return 0;
}