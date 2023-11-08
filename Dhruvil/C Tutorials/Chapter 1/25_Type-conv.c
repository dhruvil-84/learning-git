#include <stdio.h>

int main()
{
// Implicit Type Conversion NO DATA LOSS happens.
// First we will convert char to int and then int to double.
// lower order data type to higher order data type.
    char VALUE = 'a';
    printf("The character is : %c \n", VALUE);
    int CHAR_NO = VALUE;
    printf("the number is : %d \n", VALUE);
    double NUMBER = CHAR_NO;
    printf("Now the number is : %lf \n", NUMBER);
    printf("\n");
// Explicit Type Conversion DATA LOSS happens.
// First we will convert double to int and then int to char.
// higher order data type tolower order data type.
    double number = 65.973;
    printf("The number is : %lf \n", number);
    int char_no = number;
    printf("Now the number is : %d \n", char_no);
    char value = char_no;
    printf("The character is : %c \n", value);
    return 0;
}
