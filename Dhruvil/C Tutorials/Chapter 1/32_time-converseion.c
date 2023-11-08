#include <stdio.h>

int main()
{
    float Hour, Minute, Seconds;
// Hour to Minute and Seconds.
    printf("Enter the time in Hours : ");
    scanf("%f", &Hour);
    Minute = Hour * 60;
    Seconds = Hour * 3600;
    printf("The time in Minute is : %f \n", Minute);
    printf("The time in Seconds is : %f \n\n", Seconds);
// Minute to Hour and Seconds.
    printf("Enter the time in Minute : ");
    scanf("%f", &Minute);
    Hour = Minute / 60;
    Seconds = Minute * 60;
    printf("The time in Hour is : %f \n", Hour);
    printf("The time in Seconds is : %f \n\n", Seconds);
// Seconds to Hour and Minute.
    printf("Enter the time in Seconds : ");
    scanf("%f", &Seconds);
    Hour = Seconds / 3600;
    Minute = Seconds / 60;
    printf("The time in Hour is : %f \n", Hour);
    printf("The time in Minute is : %f \n\n", Minute);
    return 0;
}
