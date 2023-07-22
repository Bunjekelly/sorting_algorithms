#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int temp = 0;


	for (i = 0; i < size - 1; i++)
	{
		index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			{
				index = j;
			}
		}
		temp = array[index];
		array[index] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}

