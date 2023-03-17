#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - this is the main function
* Return: Always 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is postion\n", n);
}
else if (n == 0)
printf("%d is zero\n", n);
}
else
{
print("%d is negative\n", n);
}
	return (0);
}
