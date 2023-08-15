#include "main.h"
/**
 * main- Entry pointt
 *
 * Return: returrns 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while(str[i] != '\0')
	{
		putchar(i);

		i++;
	}
	return (0);
}
