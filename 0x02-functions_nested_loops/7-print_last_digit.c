#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{

	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
