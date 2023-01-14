#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc
* @b: memory to be allocated
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *myptr;
	unsigned int b;

	myptr = malloc(b);
	if (myptr == NULL)
		exit(98);
	return (myptr);
}
