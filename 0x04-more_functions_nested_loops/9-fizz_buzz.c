#include <stdio.h>
/**
 * main - print the numbers from 1 to 100
 * bt for multiples of three print Fizz instead of buzz
 * and for the multiples of print Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5  != 0)
		{
			printf(" Fizz");
	} else if (i % 5 == 0 && i % 3 != 0)
	{
		printf(" Buzz");
	} else if (i % 3 == 0 && i % 5 != 0)
	{
		printf(" FizzBuzz");
	} else if (i == 1)
	{
		printf("%d", i);
	} else
	{
		printf(" %d", i);
	}
	}
	printf('\n');
	return (0);
}
