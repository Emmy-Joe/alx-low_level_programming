#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: an array
 * @size: size of elements in array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (j = 0, j < size, j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}
	return (-1);
}
