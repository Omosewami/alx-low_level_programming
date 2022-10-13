#include <stdio.h>
/**
 *main - Oututs the size of diff var types
 *
 *Return: Always 0 (Successful)
 */
int main(void)
{
	char c;
	int d;
	long int e;
	long long int f;
	float g;

	printf("Size of a char: %dbyte(s)\n", sizeof(c));
	printf("Size of a int: %dbyte(s)\n", sizeof(d));
	printf("Size of a long int: %dbyte(s)\n", sizeof(e));
	printf("Size of a long long int: %dbyte(s)\n", sizeof(f));
	printf("Size of a float: %dbyte(s)\n", sizeof(g));
	return (0);
}
