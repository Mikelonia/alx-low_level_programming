#include<stdio.h>
#include"main.h"
/* main - program entry point
 * Return : 0 if succeed, non zero if fail
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);
	putchar ('\n');
		return (0);
}

