#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: Input string
 *
 * Description: This function prints the second half of the input string @str.
 *              If the length is odd, it prints the second half starting from (length + 1) / 2.
 */
void puts_half(char *str)
{
    int a, n, longi;

    longi = 0;

    for (a = 0; str[a] != '\0'; a++)
    {
        longi++;
    }

    n = (longi / 2);

    if ((longi % 2) == 1)
    {
        n = ((longi + 1) / 2);
    }

    for (a = n; str[a] != '\0'; a++)
    {
        putchar(str[a]);
    }

    putchar('\n');
}

