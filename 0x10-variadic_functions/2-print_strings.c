#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - function that prints strings, followed by a new line
* @separator: this is the string to be printed between the strings
* @n: the number of strings passed to the function
* Return: 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pstrings;
	unsigned int i;
	char *s;

	va_start(pstrings, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		s = va_arg(pstrings, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pstrings);
}
