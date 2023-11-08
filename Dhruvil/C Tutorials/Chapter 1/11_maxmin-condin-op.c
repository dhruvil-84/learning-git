#include <stdio.h>

int main()
{
    int num1, num2, num3, max, min;
    printf("Enter Num 1, Num 2 and Num3 : \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    // variable =  (condition 1) ? (expression 1) : ((expression 2) ? (expression 2) : (expression 3));
    max = ((num1 > num2) && (num1 > num3)) ? (num1) : ((num2 > num3) ? (num2) : (num3));
    /* if no.1 is greater than no.2 and no.3 then no.1 will be evaluated; otherwise it will check if no.2 
    is greater than 3 or not, if yes then no. 2 will be evaluated and if no then no.3 will be evaluated.*/
    min = ((num1 < num2) && (num1 < num3)) ? (num1) : ((num2 < num3) ? (num2) : (num3));
    /* if condition 1 is true then expression 1 will be evaluated; otherwise it will check if condition 2 
    is true or not, if yes then expression 2 will be evaluated and if no then expression 3 will be evaluated.*/
    printf("greatest of %d, %d and %d is = %d \n", num1, num2, num3, max);
    printf("least of %d, %d and %d is = %d \n", num1, num2, num3, min);
    return 0;
}
