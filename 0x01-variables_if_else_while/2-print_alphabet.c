#include <stdio.h>
/**
 * main - prints lower cse alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);

	putchar('\n');
	return (0);
}
