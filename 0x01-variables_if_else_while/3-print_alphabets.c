#include <stdio.h>

/**
 * main - main entry
 * Return: 0
*/

int main(void)

{
	char aa, bb;

	for (aa = 'a'; aa <= 'z'; aa++)
		putchar(aa);

	for (bb = 'A'; bb <= 'Z'; bb++)
		putchar(bb);

	putchar('\n');

	return (0);
}
