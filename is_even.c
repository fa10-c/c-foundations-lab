#include <stdio.h>
#include <limits.h>

/*
** Problem:
** Build a small test program that checks parity (even/odd) for a list of integers.
**
** Requirements:
** - Store multiple integers in an array
** - Loop through the array using a while loop
** - For each value, call a function that determines if the number is even
** - Print a clear message showing the number and whether it is even or odd
**
** Learning goals:
** - Practice arrays + indexing (n[i])
** - Practice loops (while) without repeating code
** - Practice function usage (is_it_even)
** - (Optional) Store results in a result array (r[i])
*/


int is_it_even(int n)
{
    if (n % 2 == 0) return (0);
    else return (1);
}

int main(void)
{
    int n[6] = {0, 5, 11, 6, 111110, 22};

    int i = 0;
    int r[6];
    while (i <= 5)
    {
        printf("the number is %d ", n[i]);
        r[i] = is_it_even(n[i]);
        if (r[i] == 0)
            printf("and it's even\n");
        else
            printf("and it's odd!\n");
        i++;
    }
}