#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0
 */
int main(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
		putchar(b + '0');
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
