#include "main.h"

/**
* _strchr - function that locates a character in a string
* @c: character to locate
* @s: string
* Return: pointer to first occurence of c
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
