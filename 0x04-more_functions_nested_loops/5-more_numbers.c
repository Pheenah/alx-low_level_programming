#include "main.h"
/**
* more_numbers - print 10times the numbers since 0 up to 14
*Return: 10times of the number since 0 up to 14
*/
void more_numbers(void)
{
	int x, y;

	for (x = 1; x < 10; x++)
	{
	for (y = 1; y < 14; y++)
	{
	if  (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
