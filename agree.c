#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user to
    char c = get_char("Do you agree? \n");

    //check whether user agreed
    if(c == 'y' || c == 'Y')
    {
        printf("Agreed. \n");
    }
    else if(c == 'n' || c== 'N')
    {
        printf("Disagreed. \n");
    }
    else
    {
        printf("Invalid answer. \n");
}
}