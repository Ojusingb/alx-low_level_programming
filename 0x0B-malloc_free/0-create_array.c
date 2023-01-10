#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* char *create_array - function that creates an array of chars
* @size: the number of bytes to be allocated
* @c: value of char
* Return: pointer to the array or NULL
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;
	
	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
