#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


// Caesar's Algorithm
// c[i] = (p[i] + k) % 26

// p =
// k = keyplain text
// p[i] = the ith character in p
// c = cipher text
// c[i] = the ith character in c

//user should provide key as command-line argument when executing the program
//should be number --- positive integer

//only rotate alphabetical characters
//preserve capitalization
// if user doesnt cooperate, remind user how  to use the program


int main(int argc, string argv[])
{
    string key = argv[1];
    int k = 0;

    if (argc != 2)
    {
        printf("Usage : ./caesar key\n");
        return 1;
    }

    //checking if the argument contains alphabet
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if (isalpha(key[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //string to integer
    k = atoi(key);

    //getting user input for plain text
    string input = get_string("plaintext: ");

    printf("ciphertext: ");

    //iterate through the plain text
    for (int j = 0, m = strlen(input); j < m; j++)
    {
        //print current element as is if it is not an alphabet
        if (!isalpha(input[j]))
        {
            printf("%c", input[j]);
            continue;
        }

        //get start of ascii value of the alphabet for both upper and lower
        int start = isupper(input[j]) ? 65 : 97;

        //get position of the current character form a/A
        int pi = input[j] - start;

        //apply formula for Caesar's Algorithm
        int ci = (pi + k) % 26;

        //print ciphered text
        printf("%c", ci + start);
    }

    printf("\n");
    return 0;

}
