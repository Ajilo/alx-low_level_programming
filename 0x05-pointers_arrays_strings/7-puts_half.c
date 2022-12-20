#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter input
 * Return: Nothing
 */

void puts_half(char *str) 
{
	int len = strlen(str);
	int half = len / 2;
	if (len % 2 == 1)
	{
		half = (len - 1) / 2;
	}
	for (int i = half; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
