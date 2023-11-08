#include <stdio.h>

int main()
{
    float Original_price, Discount, Final_price;
    printf("Enter the Original price of the product : ");
    scanf("%f", &Original_price);
    printf("Enter the Discount rate (in percent) : ");
    scanf("%f", &Discount);
    Final_price = Original_price - (Original_price * (Discount /  100));
    printf("The Final price for the product is : %f", Final_price);
    printf("\nYou save %f Rupees", (Original_price * (Discount /  100)));
    return 0;
}

