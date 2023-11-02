#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: string one to append
 * @s2: string two to append
 * @n: n bytes of s2
 *
 * Return: pointer to the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int result_length;
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length] != '\0')
		s1_length++;
	while (s2[s2_length] != '\0')
		s2_length++;

	if (n >= s2_length)
		result_length = s1_length + s2_length;
	else
		result_length = s1_length + n;

	result = (char *)malloc(result_length + 1);

	if (result == NULL)
		return (NULL);

	while (i < s1_length)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < result_length)
		result[i++] = s2[j++];
	result[i] = '\0';
	return (result);
}
