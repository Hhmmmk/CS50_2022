#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //straight line
    int w;
    do
    {
        w = get_int("Width: ");
    }
    while (w < 1);

    for(int i = 0; i < w; i++)
    {
        printf("?");
        printf("\n");
    }

    //box
    int l;
    do
    {
        l = get_int("Length: ");
    }
    while (l < 1);

    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1);

    //column
    for(int j = 0; j < h; j++)
    {
        //row
        for(int k = 0; k < l; k++)
        {
            //print brick
            printf("#");
        }
        //moving to mext row
        printf("\n");
    }
}