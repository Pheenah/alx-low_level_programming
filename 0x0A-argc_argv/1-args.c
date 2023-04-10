#include "main.h"
#include <stdio.h>

/**
* main - print number of agruments passed to the program
* @argc: number of agruments
* @argv: array of aguments
*
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
		printf("%d\n", argc - 1);
	return (0);
}
