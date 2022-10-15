#include <stdio.h>
/**
 * main - prints lower cse alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar("%c", ch);
		ch++;
	}
	putchar("\n");
	return (0);
}
