#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
 */

void puts2(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i ++i)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
