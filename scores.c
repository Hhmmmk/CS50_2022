#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n = get_int("How many scores? ");

    int scores [n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n", (scores[1] + scores[2] + scores[3]) / 3.0);
}