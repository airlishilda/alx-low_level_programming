#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{

	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase != 'e' && lcase != 'q')
		putchar(lcase);
	}
	putchar('\n');

	return (0);

}
