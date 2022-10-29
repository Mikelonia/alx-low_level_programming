#include"main.h"
/*
 * print_alphabet - prints the characters
 * Return : 0 if succeed, non zero if fail
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar (letter);
	_putchar ('\n');
		return (0);
}

