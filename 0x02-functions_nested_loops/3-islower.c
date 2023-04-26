#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The chacter to be checked
 * Return: 1 for lowercase chacter or 0 for anything else
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
