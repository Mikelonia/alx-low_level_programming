#include<stdio.h>
/**
 * main-program entry point
 * return:0 if no error, non zero if error
*/
int main(void)
	int m, i, j = '0';

	for (i = '0'; i <= '9'; i++)
{
	for (j = '0'; j <= '9'; j++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			putchar (i);
			putchar (j);
			putchar (m);
			if (i == '7' && j == '8' && m == '9' )
			{
				break;
			}
			else
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
}
}
putchar ('\n');
return (0);
}
