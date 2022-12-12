#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
int alph;
int letter;

for (alph = 'A'; alph <= 'Z'; alph++)
{
letter = alph;
putchar(tolower(letter));
}
putchar('\n');
return (0);
}
