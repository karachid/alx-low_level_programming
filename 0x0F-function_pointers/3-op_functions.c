#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - adds two ints
  * @a: first number
  * @b: second number
  * Return: int 
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - substructs b from a
  * @a: first number
  * @b: second number
  * Return: int
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two ints
  * @a: first factor
  * @b: second factor
  * Return: int
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides a by b
  * @a: first int
  * @b: second int
  * Return: int
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
  * op_mod - returns a mod b
  * @a: first int
  * @b: second int
  * Return: int
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
