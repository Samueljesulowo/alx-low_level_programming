#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - using purchar to print
 * execute, and prints all single numbers of base 10 from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
