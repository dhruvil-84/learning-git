#include <stdio.h>

int main()
{
    int principle, rate, time;
    printf("Enter the value of Principle Amount : ");
    scanf("%d", &principle);
    printf("Enter the value of Rate : ");
    scanf("%d", &rate);
    printf("Enter the value of Time Period : ");
    scanf("%d", &time);
    printf("The Simple Intrest is : %d \n", (principle * rate * time)/100);
    return 0;
}
