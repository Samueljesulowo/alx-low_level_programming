#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Test to print alphabet
 * executes, and print alphabet in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
	char (ch);


	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

