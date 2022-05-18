#include <stdio.h>

static int count_char(char *s, int c)
{
	int a;
	int b;
	c = 'c';
	b = 0;
	a = 0;
	while (s)
	{
		if (*s == c)
		a++;
		if (*s != c)
		b++;
	s++;
	}
	return (a);
}


	int main()
	{
		printf("%i", count_char("Tescte", 'c'));
	}