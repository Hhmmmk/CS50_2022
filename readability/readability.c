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

    int letters = 0;
    int words = 0;
    int sentences = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        int decimal = (int) toupper(text[i]);

        if (decimal >= 65 && decimal <= 90)
        {
            letters = letters + 1;
        }

        if (decimal == 32)
        {
            words = words + 1;
        }

        if (decimal == 33 || decimal == 46 || decimal == 59 || decimal == 63)
        {
            sentences = sentences + 1;
        }
    }

    printf("letters: %i\n", letters);

    printf("words: %i\n", words);

    printf("sentences: %i\n", sentences);

    float L = (letters / words);

    printf("L: %.4f\n", L);

    float S = (sentences / words);

    printf("S: %.4f\n", S);


    float index = (5.89 * L) - (0.3 * S) - 15.8;

    int final = round(index);

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



    //Coleman-Liau index
    // index = 0.0588 * L - 0.296 * S - 15.8
    // L = average number of letters per 100 words
    // S = average number of sentences per 100 words


}