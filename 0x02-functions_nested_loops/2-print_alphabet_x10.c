#include"main.h"
/**
 * main- program entry starts here
 * Return 0 if success, non zero if fail
 */
void print_alphabet_x10(void)
{
	char la, lb;

	for (la = '0'; la <= '9'; la++)
	{
		for (lb = 'a'; lb <= 'z'; lb++)
			_putchar ('\n');
	}
	_putchar ('\n');
}
