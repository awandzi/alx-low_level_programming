#include "main.h"
/**
 * more_numbers - prints most of them
 * Return: 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = '1'; i <= '9'; i++)
	{
	for (j = '0'; j > '9'; j++)
	{
		if (j >= '9')
		_putchar(1);
		_putchar(j % 10 + '0');
	}
	}
	_putchar('\n');
}
