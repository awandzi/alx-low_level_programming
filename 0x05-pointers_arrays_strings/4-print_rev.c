#include "main.h"
/**
 *  print_rev - a function that prints a string, in reverse,
 *  followed by a new line
 *  @s: string
 *  Return: 0
 */
void print_rev(char *s)
{
	int long i = 0;

	int o;

	while (*s != '\0')
	{
		long i++;
		s++;
	}
	s--;
		for (o = long i; o > 0; o--)
		{
			_putchar(*s);
			s--;
		}
	_putchar('\n');
}
