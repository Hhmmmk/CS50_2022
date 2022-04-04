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
        //get user input
        cardnum = get_long("Enter Card Number: ");

        //add first digit to odd
        odd = odd + (cardnum % 10);

        //counting digits
        for (i = 0; cardnum > 0; i++)
        {
            //removeing last digit
            cardnum = (cardnum - (cardnum % 10)) / 10;

            //if digit count is even
            if (i % 2 == 0)
            {
                int x = (cardnum % 10) * 2;

                //if product of degit is more than 9
                if (x > 9)
                {
                    x = x - 9;
                    even = even + x;
                }
                else
                {
                    even = even + x;
                }
            }

            //if digit count is odd
            else
            {
                odd = odd + (cardnum % 10);
            }

        }
    }
    while (i < 13);

    //add sums of even and odd
    int sum = odd + even;

    //get modulo 10 of the sums
    int mod = sum % 10;


    //print input validity
    if (mod == 0)
    {

        if (i == 15)
        {
            printf("AMEX\n");
        }
        else if (i == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (i == 13)
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