#include "variadic_functions.h"

/**
* print_numbers - a function that prints numbers, followed by a new line
* @separator: this is the string to be printed between numbers
* @n: this is the number of integers passed to the function
* Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printNum;
	unsigned int i;

	va_start(printNum, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printNum, int));
		if (i < n-1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(printNum);
}
