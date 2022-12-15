#include "main.h"
/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int cp, sq;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cp = 1; cp <= n; cp++)
		{
			for (sq = 1; sq < cp; sq++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
