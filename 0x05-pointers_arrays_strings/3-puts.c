#include "main.h"
/**
 * _puts - prints a string, followed by anew line, to stdout
 * @str: string to print
 */
int _putchar(char c);
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
