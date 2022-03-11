#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print numbers
 * executes, printing single digit numbers of base 10 start from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
