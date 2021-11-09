#include <stdio.h>

//prototype
void meow(void);

int main(void)
{
    for (int i =0; i < 3; i++)
    {
        meow();
    }
}

// in C it's preferable to put custom function at the bottom of the file
// create a function that print meow in the console
void meow(int n)
{
    for (int i = 0; n < 3; i++)
    {
    printf("meow \n");
    }
}
