#include <stdio.h>

int main() 
{
  float Radian, Degree;
  printf("Enter angle in Radians : ");
  scanf("%f", &Radian);
  Degree = (180/3.14) * Radian;
  printf("Angle in Degree is : %f \n\n", Degree);

  printf("Enter angle in Degree : ");
  scanf("%f", &Degree);
  Radian = (3.14/180) * Degree;
  printf("Angle in Radian is : %f", Radian);
  return 0;
}
