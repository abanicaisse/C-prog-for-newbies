#include <stdio.h>

int main(void)
{
    // in C single characters in inserted inside single quotes
    char yes = 'y';
    char no = 'n';
    char answer = 'n';

    if (answer == yes)
    {
        printf("agree \n");
    }
    else
    {
        printf("does not agree \n");
    }
}
