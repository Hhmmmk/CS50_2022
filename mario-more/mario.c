#include <cs50.h>
#include <stdio.h>

//define function that prints the bricks
void bricks(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}

//define function that prints the spaces
void spaces(int m)
{
    for (int j = 0; j < m; j++)
    {
        printf(" ");
    }
}

//main function
int main(void)
{
    int h;
    //user input number between 1-8 for height, repeat till user complies
    do
    {
        h = get_int("Height: ");
    }
    while (((h < 1) || (h > 8)));

    int x = 1;
    int y = 1;
    
    //repeat function till it prints required number of bricks
    while ((y <= h) && (x <= h))
    {
        //print right align bricks
        spaces(h - y);
        bricks(h - (h - x));

        //print spaces in between
        printf("  ");

        //print left align bricks
        bricks(h - (h - x));

        y++;
        x++;

        //proceed to next line
        printf("\n");
    }
}