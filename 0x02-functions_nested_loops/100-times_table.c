#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print times table up to input
 *
 * Description: Writes times table up to imput not exceeding 15
 *
 * @n: size of times table
 *
 * Return: Nothing
 */

void print_times_table(int n);
{
	if (n < 0 || n > 15)
	{
		return;
	}

	int i, j;

	for (i =0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}
}
