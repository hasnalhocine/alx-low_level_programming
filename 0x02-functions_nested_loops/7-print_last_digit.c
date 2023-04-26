#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{

	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
