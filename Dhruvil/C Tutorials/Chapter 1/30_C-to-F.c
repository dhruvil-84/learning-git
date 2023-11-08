#include <stdio.h>

int main()
{
    float Celsius, Farenheit, Kelvin;
// Celsius to Farenheint and Kelvin.
    printf("Enter the temperature in Celsius : ");
    scanf("%f", &Celsius);
    Farenheit = 9  * (Celsius / 5) + 32;
    Kelvin = Celsius + 273.15;
    printf("The temperature in Farenheit is : %f  \n", Farenheit);
    printf("The temperature in Kelvin is : %f \n\n", Kelvin);
// farenheit to Celsius and Kelvin.
    printf("Enter the temperature in Farenheit : ");
    scanf("%f", &Farenheit);
    Celsius = 5 * (Farenheit - 32) / 9;
    Kelvin = (5 * (Farenheit - 32) / 9) + 273.15;
    printf("The temperature in Celsius is : %f \n", Celsius);
    printf("The temperature in Kelvin is : %f \n\n", Kelvin);
// Kelvin to Celsius and farenheit.
    printf("Enter the temperature in Kelvin : ");
    scanf("%f", &Kelvin);
    Celsius = Kelvin - 273.15;
    Farenheit = (9 * (Kelvin - 273.15) / 5) + 32;
    printf("The temperature in Celsius is : %f \n", Celsius);
    printf("The temperature in Farenheit is : %f \n\n", Farenheit);
    return 0;
}
