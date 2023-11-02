#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc,
 * and returns a pointer to the allocated memory
 * @b: a type of unsigned int for the memory to be allocated
 * Return: pointer to the allocated memory (SUCCESS), NULL (Error)
 */
void *malloc_checked(unsigned int b) {
	void *ptr = malloc(b);
	if(ptr == NULL) {
		 exit(98);
	}
	return (ptr);
}
