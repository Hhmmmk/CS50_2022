#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//get user input for key in command-line
int main(int argc, string argv[])
{

    //check if user input is only 1 string
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }


    int i = 0;
    string key = argv[1];
    int n = strlen(key);

    //check if all characters in user input is an alphabet
    for (i = 0; i < n; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must be a character in the alphabet.\n");
            return 1;
        }
    }

    //check if user input is 26 characters long
    if (i < 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    printf("Key: ");

    //convert all letters to uppercase for basis to be constant
    for (int j = 0, m = strlen(key); j < m; j++)
    {
        if (isupper(key[j]))
        {
            continue;
        }
        else
        {
            key[j] = toupper(key[j]);
        }
    }

    //check for duplicate characters
    for (int p = 1, k = strlen(key); p < k;  p++)
    {
        for (int q = 0; q < k; q++)
        {
            if (q != p)
            {
                if (key[p] == key[q])
                {
                    printf("Key shouldn't have duplicate characters.");
                    return 1;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
    }

    printf("%s\n", key);

    //get user input for plain text
    string input = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int h = 0, l = strlen(input); h < l; h++)
    {

        //if character is not an alphabet, print as is
        if (!isalpha(input[h]))
        {
            printf("%c", input[h]);
            continue;
        }

        int start = 0;
        int position = 0;

        //if uppercase letter, subtract ascii value of uppercase 'A' to get its position in the alphabet
        if (isupper(input[h]))
        {
            position = input[h] - 65;

            //print the character in the key whose count in array is the same as the computed position
            printf("%c", key[position]);

        }
        else
        {
            //subtract ascii value of uppercase 'a' to get its position in the alphabet
            position = input[h] - 97;

            //get the character in the key whose count in array is the same as the computed position
            //add 32 (difference of ascii value of 'A' and  'a')
            printf("%c", key[position] + 32);
        }

    }

    printf("\n");

    return 0;

}
