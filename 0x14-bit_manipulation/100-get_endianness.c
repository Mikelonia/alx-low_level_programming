#include"main.h"
/**
 * get_endianness - return the endianness of the machine
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *)&i;

	if (*j)
		return (1);
	return (0);
}
