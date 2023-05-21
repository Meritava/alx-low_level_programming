#include <stdio.h>
int main ()
{
	char c = 'a';
	while ( c <= 'a' || c != 'e' || c != 'q' )
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
