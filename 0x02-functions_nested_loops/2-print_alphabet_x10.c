#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowecase
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int 1;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
