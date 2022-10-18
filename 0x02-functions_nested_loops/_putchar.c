#include "main.h"
#include <unistd.h>

/**
 * _putchar - this writes the character to cc standardoutput
 * @c: to print the character
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
