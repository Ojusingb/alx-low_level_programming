#include "main.h"

/**
* _memset - function fills the first n bytes
* pointed to by s with constant byte b
* @s: pointer to the memory area to be filled
* @b: a constant byte to be use in fill
* @n: number of bytes to be filled
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
