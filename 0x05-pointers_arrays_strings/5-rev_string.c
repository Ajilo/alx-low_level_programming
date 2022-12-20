#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: a string
 * Return: string in reverse
 */

void print_rev(char *s)
{
    int i = 0;

    /* Find the end of the string */
    while (s[i] != '\0')
    {
        i++;
    }
    i--;  /* Decrement i to point to the last character */

    /* Print the string in reverse */
    while (i >= 0)
    {
        putchar(s[i]);
        i--;
    }
    putchar('\n');
}
