#include <stdio.h>
/*
 * main-program entry point
 * Return: 0 if no error
 */
int main(void)
{
	char *hello = "Hello, World!";

	for (i = 0; hello[i] != '\0'; i++)
	{
		printf("%c", hello[i]);
	}
	printf("\n");
	return (0);
}
