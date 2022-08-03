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
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);
				j++;
			}
		}
	}
	return (-1);
}
