#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
