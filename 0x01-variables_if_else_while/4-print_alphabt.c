#include <stdio.h>
int main ()
{
	char c = 'a';
	while ( c <= 'z' || c != 'e' || c != 'q' )
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
