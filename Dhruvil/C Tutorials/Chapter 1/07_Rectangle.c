#include <stdio.h>

int main()
{
    int length;
    int breadth;
    printf("Enter the value of length : \n");
    scanf("%d", &length);
    printf("Enter the value of breadth : \n");
    scanf("%d", &breadth);
    printf("The Perimeter of the Rectangle is : %d \n", 2 * (length + breadth));
    printf("The Area of the Rectangle is : %d \n", length * breadth);
    return 0;
}