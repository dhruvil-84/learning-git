#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    (age >=18 && age<=100) ? (printf("You are eligible for voting \n")) : (printf("You are not eligible for voting \n"));
    return 0;
}
