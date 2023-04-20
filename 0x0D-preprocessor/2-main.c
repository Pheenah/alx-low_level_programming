#include <stdio.h>

/**
* main - prints name of file
*
* Return: always 0
**/

int main(void)
{
const char *p = __FILE__;
while (*p)
{
putchar(*p++);
}
putchar('\n');
return (0);
}
