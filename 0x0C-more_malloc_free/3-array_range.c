#include <stdlib.h>
#include "main.h"
/**
 * *array_range -  creates an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 *
 * Return: returns pointer to the array
 */
int *array_range(int min, int max)
{
	int *result;
	int array_size;
	int i = 0;

	if (min > max)
		return (NULL);
	array_size = max - min + 1;

	result = (int *)malloc(array_size * sizeof(int));

	if (result == NULL)
		return (NULL);

	while (i < array_size)
		result[i++] = min++;

	return (result);
}
