#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 x
 */
void print_alphabet_x10(void)
{
	int mult;
	char abc;

	for (mult = 0; mult <= 9; mult++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');
	}
}
