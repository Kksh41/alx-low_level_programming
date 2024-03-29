#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character from the string, starting with the first.
 * @str: Input string
 *
 * Description: This function prints every other character of the string @str,
 * starting with the first character, followed by a new line.
 */
void puts2(char *str)
{
    int longi = 0;
    int t = 0;
    char *y = str;
    int o;

    while (*y != '\0')
    {
        y++;
        longi++;
    }

    t = longi - 1;

    for (o = 0; o <= t; o++)
    {
        if (o % 2 == 0)
            putchar(str[o]);
    }
    putchar('\n');
}


