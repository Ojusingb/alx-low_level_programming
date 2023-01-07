#include "main.h"

/**
* _strlen - returns length of a string
* @s: char check
* Return: 0
*/

int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
