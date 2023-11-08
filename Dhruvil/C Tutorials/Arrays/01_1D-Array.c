#include <stdio.h>

int main()
{
    int i, n;
    int a[10];
    printf("Enter value of n (not more than 10) : "); // n is size of array
    scanf("%d", &n);
    printf("enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]); // i is subscript / index of array
        //if you give space after %d in above scanf function then it will take one element extra.
        // so conclusion is you can give space after %d in print function but not in scan function.
    }
    printf("The Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}