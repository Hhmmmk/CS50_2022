#include <stdio.h>

void meow(int n)
{
    for (int i =0; i < n; i++)
    {
        printf("meow \n");
    }
}


int main(void)
{

    //test meow function
    meow(3);


    //for loop
    for (int i =0; i < 3; i++)
    {
        printf("meow \n");
    }

    //while loop
    int i = 0;
    while (i < 3)
    {
        printf("meow \n");
        i++;
    }
}
