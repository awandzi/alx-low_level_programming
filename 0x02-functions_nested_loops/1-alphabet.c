#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercases
 */
void print_alphaabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
