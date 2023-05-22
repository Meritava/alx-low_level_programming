#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	char ch = 'a';
	char CH = 'A';
	while (ch <= 'z' && CH <= 'Z')
	{
		putchar(ch);
		ch++;
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
