#include <stdio.h>
/**
 * main - enty
 * Return: 0
*/

int main(void)

{
	int x;
	char A;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (A = 'a'; A <= 'f'; A++)
		putchar(A);
	putchar('\n');

	return (0);

}
