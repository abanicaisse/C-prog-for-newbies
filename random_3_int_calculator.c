#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("The program is gonna prompt for you 3 integers \n\n");

    int a = 0, t = 0, v0= 0;
    float sum = 0, prod = 0, aver = 0, r = 0;

    //ask the user to input the integers
    printf("Enter a: ");
    scanf("%i", &a);
    printf("Enter t: ");
    scanf("%i", &t);
    printf("Enter v0: ");
    scanf("%i", &v0);
    printf("\n\n");

    sum = a + t + v0;
    prod = a * t * v0;
    aver = ((float)a + (float)t + (float)v0)/3;
    r = ((float)1/(float)2 * ((float)a * pow((float)t,2))) + (((float)v0 * (float)t)) + (float)v0; //line incorrect, to review

    printf("the sum of a,t & v0 is: %.3f \n\n", sum);
    printf("the product of a,t & v0 is: %.3f \n\n", prod);
    printf("the average of a,t & v0 is: %.3f \n\n", aver);
    printf("the value of r is: %.3f \n", r); //This is not printing the intended result, to review

}
