#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: returns 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar('\t');
			}
		}
	}

	putchar(' ');
	return (0);
}
