#include <stdio.h>

/**
 * main - entry point
 * Return: 0
*/

int main(void)

{
	int t;

	for (t = 0; t <= 9; t++)
	{
		putchar((t % 10) + '0');
		if (t == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
