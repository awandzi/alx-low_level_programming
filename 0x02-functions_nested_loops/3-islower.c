#include "main.h"
/**
 * _is lower - check if char is lower case
 * @c: is the char to be checked
 * Return 1 if the char is lowercase,otherwise 0.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
