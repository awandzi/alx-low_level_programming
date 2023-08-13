#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercases
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char c = 'a';

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
	_putchar(i);
}
