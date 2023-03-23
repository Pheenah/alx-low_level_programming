#include "main.h"
/**
*Print_line - Draw a straight line according to parmeters
*@n: The number of line to draw
*Return: empty
*/
void print_lines(int n)
{
	int x;
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
