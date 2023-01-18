#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - the add function
 * @a: the a variable
 * @b: the b variable
 * Return: 0 if no error
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the sub function
 * @a: the a variable
 * @b: the b variable
 * Return: 0 if no error
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the multiplication function
 * @a: the variable a
 * @b: the variable b
 * Return: 0 if no error
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -the division function
 * @a: the first variable
 * @b: the second variable
 * Return: 0 if no error
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - the mod function
 * @a: the first variable
 * @b: the second variable
 * Return: 0 if no error
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
