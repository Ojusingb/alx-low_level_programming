#include <stdio.h>

/**
 * main- entry point
 * Return: 0
*/

int main(void)

{
	char qq;

	for (qq = 'z'; qq >= 'a'; --qq)
		putchar(qq);

	putchar('\n');

	return (0);
}
