#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user for x value
    float x = get_float("x: ");
    //prompt user for y value
    float y = get_float("y: ");
    //perform addition
    float z = (float) x / (float) y;
    printf("%.2f\n", z);
}