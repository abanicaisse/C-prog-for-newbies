#include <stdio.h>

int main(void)
{
    int x = 20;
    int y = 28;

    if (x < y)
    {
       printf("%i is smaller than %i \n", x,y);
    }
    else if (x > y)
    {
        printf("%i is bigger than %i \n", x,y);
    }
    else
    {
        printf("%i is equal to %i \n", x,y);
    }
}
