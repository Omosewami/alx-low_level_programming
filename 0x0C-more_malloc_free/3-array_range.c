#include "main.h"
#include <stdlib>

/**
 * array_range - Creates an array of integers ordered
 * from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 * Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	/*declare pointer to be used*/
	int *arr;
	int i;
	int range;

	/*verify that min is less than max*/
	if (min > max)
		return (NULL);

	range = (max - min) + 1;
	/*reserve space in heap for the array*/
	arr = malloc(sizeof(int) * range);

	/*verify that malloc did not fail*/
	if (arr == NULL)
		return (NULL);

	/*fill memory with values ranging from min to max inclusive*/
	for (i = 0; i < range; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
