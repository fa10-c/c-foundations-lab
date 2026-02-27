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

    printf("max of %d and %d is %d\n", a, b, max(a, b));

    float c = -11.5f;
    float d = 442.7f;

    printf("max of %f and %f is %f\n", c, d, max(c, d));


    char e = 'e';
    char f = 'f';

    printf("max of %c and %c is %c\n", e, f, max(e, f));

    char* j = "hi";
    char* k = "bye";

    printf ("max of %s and %s is %s\n", j, k, max(j, k));
}