#include <stdio.h>

/**
 * main - entry point
 * Return: 0
*/

int main(void)

{
	char za;

	for (za = 'a'; za <= 'z'; za++)
	{
		if (za != 'e' && za != 'q')
			putchar(za);

	}
	putchar('\n');

	return (0);
}
