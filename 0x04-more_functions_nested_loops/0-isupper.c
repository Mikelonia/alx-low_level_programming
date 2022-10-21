#include<stdio.h>
#include"main.h"
/**
 * main: program entry point
 * return: 0 if success, non zero if error
 * else return 1 if c is upperase
 */
int _isupper(int c);
int main(void)
{
char c;

c = 'A';
_putchar ("%c: %d\n", c, _isupper(c));
c = 'a';
_putchar ("%c: %d\n", c, _isupper(c));
return (0);
}

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
