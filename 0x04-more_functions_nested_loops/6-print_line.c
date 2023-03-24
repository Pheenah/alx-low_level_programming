#include "main.h"

/**
*Print_line - Draw a straight line according to parmeters
*@n: The number of line to draw
*Return: empty
*/
void print_line(int n)
{
        int i;

        for (i = 0; i < n; i++)
        {
                _putchar('_');
        }
        _putchar('\n');
}
