#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: returns 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		else
			continue;
	}
	putchar('\n');
	return (0);
}
