#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/** more headers goes there 
 * main-program entry point here
 * Return: 0-no error, non zero value if error*/



/* betty style doc for function main goes there */

int main(void)

{

		int n;

		srand(time(0));
			n = rand() - RAND_MAX / 2;
			if (n > 0)
			{
				printf("%d is positive\n:", n);
				}
				else if(n<0)
				{
				printf("%d is negative\n", n);
				}
				else if (n==0)
				{
				printf("%d is zero\n", n);
				}
				/* your code goes there */
					return (0);
}
