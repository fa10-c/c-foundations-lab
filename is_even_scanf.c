#include <stdio.h>


/*
** Exercise:
** Build an interactive program that reads an integer from the user
** using scanf and determines whether the number is even or odd.
**
** Requirements:
** - Prompt the user for input
** - Validate that scanf successfully reads an integer
** - If input is invalid, print "Invalid input" and exit
** - If valid, print whether the number is:
**     - ZERO
**     - NEGATIVE EVEN / NEGATIVE ODD
**     - EVEN / ODD
**
** Learning goals:
** - Understand how scanf works and what it returns
** - Practice input validation
** - Separate logic (parity function) from input/output handling
*/

int is_even(int n)
{
    if (n % 2 == 0)
        return 0;
    else
        return 1;
}

int main()
{
    printf("Enter number: ");
    int scanf_ret;
    int usr_val;

    scanf_ret = scanf("%d", &usr_val);

    if (scanf_ret != 1)
        printf("invalid input\n");
    else
    {
        int t = is_even(usr_val);
        if (t == 0)
            printf("the number is %d and iet's even\n", usr_val);
        else
            printf("the number is %d and it's odd!\n", usr_val);
    }
}