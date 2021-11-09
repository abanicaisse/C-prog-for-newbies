#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("Calculate the roots X1 and X2 of the equation 5X^2 + 8X + 3 = 0 \n\n");

    //Determining a, b, and c from the above equation
    int a = 5, b = 8, c = 3;
    float X1 = 0, X2 = 0;

    //Calculate the roots X1 and X2 using the formula
    X1 = (-b - sqrt(pow((float) b, 2) - (4*(float)a*(float)c)))/(2*(float)a);
    X2 = (-b + sqrt(pow((float) b, 2) - (4*(float)a*(float)c)))/(2*(float)a);

    printf("----------------------------- \n");
    printf("X1 = %.3f and X2 = %.3f \n", X1, X2);
    printf("----------------------------- \n\n");

}
