#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
