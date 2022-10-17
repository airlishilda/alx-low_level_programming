#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{

	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);

}
