/*
 * File: 9-print_comb.c
 */

#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: 0.
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
