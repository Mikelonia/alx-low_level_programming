#include"main.h"

/**
 * _isdigit(int c) - digit checker
 * Return: 1 if digit, else return 0
 * @c: char to check
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
