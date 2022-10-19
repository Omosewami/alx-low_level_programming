#include "main.h"

/**
 * prints_last_digit -  print last digit
 * @ldigit: the number
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
	int ldigit = n  % 10;

	if (ldigit < 0)
		ldigit *= -1;

	_putchar(ldigit + '0');

	return (ldigit);
}
