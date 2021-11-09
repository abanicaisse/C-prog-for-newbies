#include <stdio.h>

int main(void)
{
    int x = 25;
    int y = 12;

    float z = (float)x/(float)y; //Convert the integers x and y into float numbers in order to get the calculation right

    printf("%i divided by %i is %f", x,y,z);
}
