#include <stdio.h>
/**
 * main - Program that prints all possible combinations of single-digit
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar((num % 10) + '0');
	if (n == '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
