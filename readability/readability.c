#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
    //get user input as string
    string text = get_string("Text: ");

    //initiate variables
    float letters = 0;
    float words = 1;
    float sentences = 0;

    //iterate through the characters in the input string
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //convert all letters to uppercase, get their decimal value in ascii table
        int decimal = (int) toupper(text[i]);

        //use the range of the letters' decimal value to detect letters through each iteration
        if (decimal >= 65 && decimal <= 90)
        {
            letters = letters + 1;
        }

        //use decimal value of 'space' to detect each word
        if (decimal == 32)
        {
            words = words + 1;
        }

        //use decimal value of the punctiations to detect sentences
        if (decimal == 33 || decimal == 46 || decimal == 63)
        {
            sentences = sentences + 1;
        }

    }

    //Applying Coleman-Liau index
    // index = 0.0588 * L - 0.296 * S - 15.8
    // L = average number of letters per 100 words
    // S = average number of sentences per 100 words

    float L = (letters / words) * 100;

    float S = (sentences / words) * 100;

    float index = (0.0588 * L) - (0.296 * S) - 15.8;

    //round the index and store in an int variable
    int final = round(index);

    //print Output
    if (final <= 16)
    {
        printf("Grade %i\n", final);
    }

    if (final > 16)
    {
        printf("Grade 16+\n");
    }

    if (final < 1)
    {
        printf("Before Grade 1\n");
    }





}