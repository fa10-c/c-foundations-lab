/*
** Exercise:
** Implement a function-like macro MAX(x, y) that returns the greater of two values
** using the ternary operator.
**
** Requirements:
** - The macro must work with numeric types (int, float, char)
** - Parameters and the whole expression must be parenthesized to avoid precedence bugs
**
** Goal:
** - Demonstrate how function-like macros can behave like generic functions
** - Observe limitations when used with pointers (e.g., char*)
*/

#include <stdio.h>

#define MAX(x, y) (((x)>=(y)) ? (x) : (y))

int main (void)
{
    int a = 21;
    int b = 50;

    printf("MAX of %d and %d is %d\n", a, b, MAX(a, b));

    float c = -11.5f;
    float d = 442.7f;

    printf("MAX of %f and %f is %f\n", c, d, MAX(c, d));


    char e = 'e';
    char f = 'f';

    printf("MAX of %c and %c is %c\n", e, f, MAX(e, f));

    char* j = "hi";
    char* k = "bye";

    printf ("MAX of %s and %s is %s\n", j, k, MAX(j, k));
}