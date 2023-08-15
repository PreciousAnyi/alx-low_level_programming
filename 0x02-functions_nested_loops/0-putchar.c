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
		char a = str[i];
		
		_putchar(a);

		i++;
	}
	return (0);
}
