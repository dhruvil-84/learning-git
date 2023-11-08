#include <stdio.h>
// Associativity and Precedence of operators :- BODMAS Rule is not valid.
int main()
{
    float a, b, c, d;
    printf("Enter value of a, b, c, d: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d); // 67 3 44 4.
    printf("Precedence and Associativity :\n");
    printf("Example 1 : %f ", a - b + c - d + c);  // eg 67-3+44-4+44 --> 64+44-4+44 --> 108-4+44 --> 104+44 --> 148.
    printf("Example 2 : %f\n", a * c / d * b / c); // eg 67*44/4*3/44 -> 2948/4*3/44 -> 737*3/44 -> 2211/44 -> 50.25.
    printf("Example 3 : %f ", a * b + c / d - c);  // eg 67*3+44/4-44 --> 201+11-44 --> 212-44 --> 168.
    printf("Example 4 : %f\n", c * c + c / c - c); // eg 44*44+44/44-44 --> 1936+1-44 --> 1893.
    printf("Example 5 : %f ", a - b * c / d - c);  // eg 67-3*44/4-44 -> 67-132/4-44 -> 67-33-44 -> 34-44 -> -10.
    printf("Example 6 : %f\n", (a + b) * (c - d)); // eg (67+3)*(44-4) --> 70 * 40 --> 2800.
    printf("Example 7 : %f ", a + b * c - d);      // eg 67+3*44-4 --> 67+132-4 --> 199-4 --> 195.
    printf("Example 8 : %f\n", (a + b) * c - d);   // eg (67+3)*44-4 --> 70*44-4 --> 3080-4 --> 3076.
    printf("Example 9 : %f ", a + b * (c - d));    // eg 67+3*(44-4) --> 67+3*40 --> 67+120 --> 187.
    return 0;
}
