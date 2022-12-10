#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char af = 'a';

	while (af <= 'z')
	{
		putchar(af);
		++af;
	}
	putchar('\n');

	return (0);
}
