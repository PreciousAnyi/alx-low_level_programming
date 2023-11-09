#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (!string)
			string = "(nil)";
		else if (!separator)
			printf("%s", string);
		else if (separator && i == 0)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}
	printf("\n");

	va_end(list);
}
