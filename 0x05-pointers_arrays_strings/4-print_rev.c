#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * _putchar - Writes a character to stdout
 * @c: The character to print
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;
	int _putchar(char c);

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o>0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
