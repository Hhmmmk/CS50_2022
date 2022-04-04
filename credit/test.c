#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int count = 0;
    long cardnum = 0;

    int i = 0;

    int odd = 0;
    int even = 0;

    // get user input and check number of digits
    do
    {
        cardnum = get_long("Enter Card Number: ");
        odd = odd + (cardnum % 10);
        for (i = 0; cardnum > 0; i++ )
        {
            cardnum = (cardnum - (cardnum % 10)) / 10;

            if (i % 2 == 0)
            {
                int x = (cardnum % 10) * 2;
                if (x > 9)
                {
                    x = x-9;
                    even = even + x;
                }
                else
                {
                    even = even + x;
                }

            }
            else
            {
                odd = odd + (cardnum % 10);
            }

        }
    }
    while (i < 13);

    int sum = odd + even;

    int mod = sum % 10;


    printf("DIGITS: %i \n", i);
    printf("EVEN: %i \n", even);
    printf("ODD: %i \n", odd);
    printf("SUM: %i \n", sum);
    printf("MOD: %i \n", mod);


    if (mod == 0)
    {
        printf("VALID\n");

        if (i == 15)
        {
            printf("AMEX\n");
        }
        else if (i == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (i == (13))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

}







#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int count = 0;
    long cardnum = 0;

    int i = 0;

    int odd = 0;
    int even = 0;

    // get user input and check number of digits
    do
    {
        cardnum = get_long("Enter Card Number: ");
        odd = odd + (cardnum % 10);
        for (i = 0; cardnum > 0; i++ )
        {
            cardnum = (cardnum - (cardnum % 10)) / 10;

            if (i % 2 == 0)
            {
                even = even + ((cardnum % 10) * 2);
            }
            else
            {
                odd = odd + (cardnum % 10);
            }

        }
    }
    while (i < 13);

    int sum = odd + even;

    int mod = sum % 10;

    if (mod == 0)
    {
        printf("VALID\n");

        if (i == 15)
        {
            printf("AMEX\n");
        }
        else if (i == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (i == (13))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

}


