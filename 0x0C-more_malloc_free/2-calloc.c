#include <stdlib.h>
#include "main.h"
/**
 * *_memset - sets memory to 0
 * @s: pointer
 * @n: value to set in memory
 * @size: bytes of element
 *
 * Return: returns a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of array element
 * @size: bytes of each array element
 *
 * Return: Null or returns pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);
	_memset(result, 0, nmemb * size);
	return (result);
}
