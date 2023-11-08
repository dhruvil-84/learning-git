#include<stdio.h>

int main()
{
    char abcd;
    double f = 29;
    printf("Hello World \n");
    printf("the size of char is %d \n", sizeof(char));
    printf("the size of unssigned char is %d \n", sizeof(unsigned char));
    printf("the size of unsigned short int is %d \n", sizeof(unsigned short int));
    printf("the size of short int is %d \n", sizeof(short int));
    printf("the size of long int is %d \n", sizeof(long int));
    printf("the size of int is %d \n", sizeof(int));
    printf("the size of unsigned int is %d \n", sizeof(unsigned int));
    printf("the size of unsigned long int is %d \n", sizeof(unsigned long int));
    printf("the size of float is %d \n", sizeof(float));
    printf("the size of double is %d \n", sizeof(double));
    printf("the size of long double is %d \n", sizeof(long double));
    printf("the size of given char is %d \n", sizeof(abcd));
    printf("the size of given no. is %d \n", sizeof(522445));
    printf("the size of double is %d \n", sizeof(f));
    return 0;
}
