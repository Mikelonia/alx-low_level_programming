#include<stdio.h>
#include"main.h"
/**
 * main: program entry point
 * return: 0if success, non zero if error
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
void _isupper(int c)
{
	printf("I\'m now inside _isupper");
}
