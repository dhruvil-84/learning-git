#include <stdio.h>

int main()
{
    char character;
    printf("Enter the Character whose ASCII Value you need : ");
    scanf("%c", &character);
    printf("The ASCII Value of %c is %d. \n", character, character);
    printf("Enter the ASCII Value of the Character you need : ");
    scanf("%d", &character);
    printf("The Character of ASCII Value %d is %c. ", character, character);
    return 0;
}
